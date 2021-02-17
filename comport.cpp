#include "comport.h"
#include <QDebug>
#include <QtSerialPort/QSerialPortInfo>
#include <algorithm>
#include <list>


const double comport::K_ANG = 359.9 / 65536.0;

const QByteArray comport::SOP1 = QByteArray::fromHex("0d");
const QByteArray comport::SOP2 = QByteArray::fromHex("0a");
const QByteArray comport::SOP3 = QByteArray::fromHex("7e");

const int comport::T_REQ = 1000;

comport::comport(QObject *parent):
    QObject(parent)
{
    serial = new QSerialPort(this);
    serial->setPortName("COM13");
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    serial->open((QIODevice::ReadWrite));

    if (serial->isOpen()) {
        connect(serial, &QSerialPort::readyRead, this, &comport::receiveMessageFromUSART);
    }
    /*foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        QSerialPort port;
        port.setPort(info);
        if (port.open(QIODevice::ReadWrite)) {
            qDebug()<<"Название: " + serial->portName() + info.description() + info.manufacturer();
        }
    }*/
}
comport::~comport() {
    serial->close();
    delete serial;
}
/*QString comport::msg() {
    return m_msg;
}*/
QString comport::rollmsg() {
    return m_rollmsg;
}
QString comport::pitchmsg() {
    return m_pitchmsg;
}
void comport::receiveMessageFromUSART() {
    //static int index = 0;
    static int mstate = 0;
    static int msgId = 0;
    static int msgSize = 0;
    static int bytesRecieved = 0;

    while (!serial->atEnd()) {
        QByteArray in_char = serial->read(1);
        //qDebug() << in_char;
        switch(mstate) {
            case 0:
                  if (in_char == SOP1) {
                      mstate++;
                  }
                  else
                      mstate = 0;
            break;
            case 1:
                  if (in_char == SOP2) {
                      mstate++;
                  }
                  else
                      mstate = 0;
            break;
            case 2:
                  if (in_char == SOP3) {
                      mstate++;
                  }
                  else
                      mstate = 0;
            break;
            case 3:
                msgId = in_char[0];
                mstate++;
            break;
            case 4:
                msgSize = in_char[0];
                mstate++;
            break;
            case 5:
                if (bytesRecieved < msgSize) {
                    m_message.append(in_char);
                    bytesRecieved += 1;
                } else {
                    defineMessageType(msgId);
                    mstate = 0;
                    bytesRecieved = 0;
            }
            break;

            default: mstate = 0;
                     //index = 0;
        }
    }
}

void comport::defineMessageType(int msgid)
{
    switch (msgid) {

    case DORIENT:
        handleMessageDorient();
        break;
    default:
        qWarning() << Q_FUNC_INFO << "[!]: default";
        break;
    }
    m_message.clear();
}

void comport::handleMessageDorient()
{
    QString p_roll;
    QString p_pitch;
    QByteArray data = m_message;

    if (data.size() < 18) {
        qWarning() << Q_FUNC_INFO << "[!]: data size is less than required";
        return;
    }
    double roll = QString::number((short)((data.at(1) << 8) + (data.at(0))) * K_ANG, 10, 1).toDouble();
    double pitch = QString::number((short)((data.at(3) << 8) + (data.at(2))) * K_ANG, 10, 1).toDouble();
    double azimuth = QString::number((unsigned short)((data.at(5) << 8) + (data.at(4))) * K_ANG, 10, 1).toDouble();
    //qDebug() << roll;

    QList<double> res;
    QList<double> tabroll{roll};
    //tabroll << roll;
    qDebug() << *std::max_element(tabroll.begin(),tabroll.end());

    res << roll << pitch << azimuth;
    p_pitch = QString::number(pitch, 'f', 1).rightJustified(4, '0');

    //p_roll = "---.-";
    if (roll >= 0) {
        p_roll = QString::number(roll, 'f', 1).rightJustified(4, '0').leftJustified(5, '+');
    } else {
        p_roll = QString::number(roll*(-1), 'f', 1).rightJustified(4,'0').rightJustified(5, '-');
    }
    //emit setMsg(p_roll);
    emit setRoll(p_roll);
    emit setPitch(p_pitch);
    emit rotationUpdate(roll);
    //emit dataRecieved(res);
}

/*void comport::setMsg(const QString &msg) {
    if(m_msg == msg)
        return;
    m_msg = msg;
    emit msgChanged();
}*/

void comport::setRoll(const QString &rollmsg) {
    if(m_rollmsg == rollmsg)
        return;
    m_rollmsg = rollmsg;
    emit rollChanged();
}
void comport::setPitch(const QString &pitchmsg) {
    if(m_pitchmsg == pitchmsg)
        return;
    m_pitchmsg = pitchmsg;
    emit pitchChanged();
}

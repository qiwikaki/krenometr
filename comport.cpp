#include "comport.h"
#include <QDebug>
#include <QtSerialPort/QSerialPortInfo>
#include <algorithm>
#include <list>
#include <QTimer>

#ifndef DESKTOP_X64
    const QString comport::PORT_NAME = "COM13";
#else
    const QString comport::PORT_NAME = "ttyUSB1";
#endif

const double comport::K_ANG = 359.9 / 65536.0;

const QByteArray comport::SOP1 = QByteArray::fromHex("0d");
const QByteArray comport::SOP2 = QByteArray::fromHex("0a");
const QByteArray comport::SOP3 = QByteArray::fromHex("7e");

const int comport::T_REQ = 1000;
bool p_right;
bool p_left;

comport::comport(QObject *parent):
    QObject(parent)
{
    QTimer *timer = new QTimer(this);
    timer->setInterval(1);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
    timer->start();

    serial = new QSerialPort(PORT_NAME, this);

    //serial->setPortName("/dev/ttyUSB1");
    //serial->setPortName("COM13");
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
    delete timer;
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
QString comport::maxrollmsg() {
    return m_maxrollmsg;
}
QString comport::minrollmsg() {
    return m_minrollmsg;
}
QString comport::periodmsg() {
    return m_periodmsg;
}
double comport::testmin_msg() {
    return m_testmin_msg;
}
double comport::testmax_msg() {
    return m_testmax_msg;
}
void comport::updateTime() {
    static double rightBoard = 0;
    static double leftBoard = 0;
    static double pmax_rightBoard;
    static double pmax_leftBoard;
    QString period;

    if (p_right) {
        pmax_leftBoard = 0;
        rightBoard++;
        if (pmax_rightBoard < rightBoard) {
            pmax_rightBoard = rightBoard;
            period = QString::number(pmax_rightBoard/1000, 'f', 1);
        }
    } else rightBoard = 0;
    if (p_left) {
        pmax_rightBoard = 0;
        leftBoard++;
        if (pmax_leftBoard < leftBoard) {
            pmax_leftBoard = leftBoard;
            period = QString::number(pmax_leftBoard/1000, 'f', 1);
        }
    } else leftBoard = 0;

    setPeriod(period);

    qDebug() << period;
    //qDebug() << pmax_leftBoard;

    //qDebug() << leftBoard;
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
    QString pmax_roll;
    QString pmin_roll;
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

    //QList<double> tabroll{1,2,3,4,500,100};
   /* QList<double> tabroll;
    tabroll.append(roll);*/
    //tabroll << roll;

    res << roll << pitch << azimuth;
    p_pitch = QString::number(pitch, 'f', 1).rightJustified(4, '0');
    //p_roll = "---.-";
    if (roll >= 0.0) {
        p_right = 1;
        p_left = 0;
        p_roll = QString::number(roll, 'f', 1).rightJustified(4, '0').leftJustified(5, '+');
        //qDebug() << max_roll;
        if (max_roll < roll) {
            max_roll = roll;
            pmax_roll = QString::number(max_roll, 'f', 1);
            settestmax(max_roll);
            //qDebug() << pmax_roll;
            min_roll = 1.0;    /* KAK ETO RABOTAET???*/
            setMaxroll(pmax_roll);
            //emit maxRollChanged(max_roll);
        }
    } else {
        p_right = 0;
        p_left = 1;
        p_roll = QString::number(roll*(-1), 'f', 1).rightJustified(4,'0').rightJustified(5, '-');
        if (min_roll > roll) {
            min_roll = roll;
            pmin_roll = QString::number(min_roll, 'f', 1);
            settestmin(min_roll);
            //qDebug() << pmin_roll;
            max_roll = 1.0;   /* KAK ETO RABOTAET???*/
            setMinroll(pmin_roll);
            //emit minRollChanged(min_roll);
        }
    }
    //emit setMsg(p_roll);
    setRoll(p_roll);
    setPitch(p_pitch);
    emit rotationUpdate(roll);
    //emit dataRecieved(res);
    //qDebug() << *std::max_element(tabroll.begin(),tabroll.end());
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
void comport::setMaxroll(const QString &maxrollmsg) {
    if(m_maxrollmsg == maxrollmsg)
        return;
    m_maxrollmsg = maxrollmsg;
    emit maxRoll();
}
void comport::setMinroll(const QString &minrollmsg) {
    if(m_minrollmsg == minrollmsg)
        return;
    m_minrollmsg = minrollmsg;
    emit minRoll();
}
void comport::setPeriod(const QString &periodmsg) {
    if(m_periodmsg == periodmsg)
        return;
    m_periodmsg = periodmsg;
    emit periodChanged();
}
void comport::settestmin(const double &testmin_msg) {
    if(m_testmin_msg == testmin_msg)
        return;
    m_testmin_msg = testmin_msg;
    emit testmin();
}
void comport::settestmax(const double &testmax_msg) {
    if(m_testmax_msg == testmax_msg)
        return;
    m_testmax_msg = testmax_msg;
    emit testmax();
}

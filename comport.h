#ifndef COMPORT_H
#define COMPORT_H

#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

class comport : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString msg READ msg WRITE setMsg NOTIFY msgChanged)
    Q_ENUMS(MsgId)

public:
    explicit comport(QObject *parent = 0);
    ~comport();
    QString msg();
    static const int T_REQ;
    static const QByteArray SOP1, SOP2, SOP3;
    static const double K_ANG;
    enum MsgId {
        DORIENT = 112,
    };
private:
    QSerialPort *serial;
    QByteArray m_message;
    QString m_msg;
private slots:
    void receiveMessageFromUSART();
    void defineMessageType(int msgid);
    void handleMessageDorient();
    void setMsg(const QString &msg);

signals:
    void msgChanged();
    //new file(krenometr)//
    void rotationUpdate(double angle);
    //void dataRecieved(QList<double> data);
};

#endif // COMPORT_H

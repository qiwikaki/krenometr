#ifndef COMPORT_H
#define COMPORT_H

#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

class comport : public QObject
{
    Q_OBJECT
    //Q_PROPERTY(QString msg READ msg WRITE setMsg NOTIFY msgChanged)
    Q_PROPERTY(QString rollmsg READ rollmsg WRITE setRoll NOTIFY rollChanged)
    Q_PROPERTY(QString pitchmsg READ pitchmsg WRITE setPitch NOTIFY pitchChanged)
    Q_PROPERTY(QString maxrollmsg READ maxrollmsg WRITE setMaxroll NOTIFY maxRoll)
    Q_PROPERTY(QString minrollmsg READ minrollmsg WRITE setMinroll NOTIFY minRoll)
    Q_PROPERTY(double testmin_msg READ testmin_msg WRITE settestmin NOTIFY testmin)


    Q_ENUMS(MsgId)

public:
    explicit comport(QObject *parent = 0);
    ~comport();
    //QString msg();
    QString rollmsg();
    QString pitchmsg();
    QString maxrollmsg();
    QString minrollmsg();
    double testmin_msg();
    static const int T_REQ;
    static const QByteArray SOP1, SOP2, SOP3;
    static const double K_ANG;
    double max_roll= 0.0;
    double min_roll= 0.0;
    enum MsgId {
        DORIENT = 112,
    };
private:
    QSerialPort *serial;
    QByteArray m_message;
    //QString m_msg;
    QString m_rollmsg;
    QString m_pitchmsg;
    QString m_maxrollmsg;
    QString m_minrollmsg;
    double m_testmin_msg;


private slots:
    void receiveMessageFromUSART();
    void defineMessageType(int msgid);
    void handleMessageDorient();
    //void setMsg(const QString &msg);
    void setRoll(const QString &rollmsg);
    void setPitch(const QString &pitchmsg);
    void setMaxroll(const QString &maxrollmsg);
    void setMinroll(const QString &minrollmsg);
    void settestmin(const double &testmin_msg);


signals:
    //void msgChanged();
    void rollChanged();
    void pitchChanged();
    void maxRoll();
    void minRoll();
    //new file(krenometr)//
    void rotationUpdate(double angle);
    void maxRollChanged(double angle);
    void minRollChanged(double angle);
    void testmin();


};

#endif // COMPORT_H

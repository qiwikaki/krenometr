#ifndef KREN_H
#define KREN_H

#include <QApplication>
#include <QObject>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <QTimer>
#include <QThread>
#include <QDebug>
#include "comport.h"

class Kren : public QObject
{
    Q_OBJECT

public:
    explicit Kren(QQmlContext *context, QObject *parent = Q_NULLPTR);
    ~Kren();
    QQmlContext *context_m;

signals:

    //void cardUpdated(double big, double small);

    //void userDataReady(QList<double> data);

public slots:
    //void updateCourse(double course);

protected:
    QObject *qml;

private:

    comport *m_sensorPort;
    QThread *m_sensorPortThread;
    //UserPort *m_userport;
    QTimer *m_timerUserPort;

private slots:
   // void sendMessage();
    //void updateCard(double course);

};

#endif // KREN_H

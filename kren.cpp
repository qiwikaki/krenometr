#include "kren.h"

Kren::Kren(QQmlContext *context, QObject *parent) :
     QObject(parent)
{
    context_m = context;

    // Переносим работу порта в отдельный поток
    m_sensorPortThread = new QThread;
    m_sensorPort->moveToThread(m_sensorPortThread);
    m_sensorPortThread->start();
}

Kren::~Kren()
{
    delete m_sensorPort;
    delete m_sensorPortThread;
}

/*void Kren::updateCard(double p_course)
{
    //p_course = 2;
}*/

#include "source.h"
#include <qdebug.h>

Source::server()
{
    qDebug()<<"start";
    qServer = new QTcpServer();
    qServer->listen(QHostAddress::Any, 7777);
    connect(qServer, SIGNAL(newConnection()),this, SLOT(acceptConn()));

}
void Source::acceptConn()
{
    qDebug()<<"accept";
    client=qServer->nextPendingConnection();
    connect(client, SIGNAL(readyRead()), this, SLOT(printMessage()));
}
void Source::printMessage()
{
    qDebug()<<"print";
    QByteArray read = client->readAll();
    qDebug()<<read;
}

#ifndef SOURCE_H
#define SOURCE_H
#include <QTcpServer>
#include <QTcpSocket>
#include <QObject>
class Source: public QObject
{
private:
    QTcpServer *qServer;
    QTcpServer client;

private slots:
    void acceptConn();
    void printMessage();
public:
    Source();
};

#endif // SOURCE_H

#include <QtTest>

#include "qcivetserver.h"

class QCivetServerTest: public QObject
{
    Q_OBJECT

private slots:
    void initTestCase() {
        qDebug("Create instance of QCivetServer");
        server = new QCivetServer();
    }

    void cleanupTestCase() {
        qDebug("Cleanup");
        server = NULL;
    }

    void shouldStartServer() {
        qDebug("Start QCivetServer");
        QVERIFY(server != NULL);
        server->start();
    }

    void shouldStopServer() {
        qDebug("Stop QCivetServer");
        server->stop();
    }

private:
    QCivetServer* server;
};

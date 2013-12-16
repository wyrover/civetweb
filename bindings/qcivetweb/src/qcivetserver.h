#ifndef QCIVETSERVER_H
#define QCIVETSERVER_H

#include <QObject>

#include "civetweb.h"

class QCivetServer : public QObject
{
    Q_OBJECT

public:
    QCivetServer();

public slots:
    bool start();
    void stop();

private:
    struct mg_context* civetContext;
};

#endif // QCIVETSERVER_H

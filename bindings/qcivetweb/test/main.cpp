#include <QtTest>

#include "qcivetservertest.h"

int main(int argc, char *argv[]) {
    Q_UNUSED(argc);
    Q_UNUSED(argv);

    QCivetServerTest serverTest;
    QTest::qExec(&serverTest);
}

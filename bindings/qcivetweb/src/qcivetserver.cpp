#include "qcivetserver.h"


QCivetServer::QCivetServer()
    : civetContext(NULL)
{
}

bool QCivetServer::start() {
    const char * options[] = {
        "document_root",    "testdir",
        "listening_ports",  "8080",
        NULL
    };

    struct mg_callbacks callbacks;
    memset(&callbacks, 0, sizeof(callbacks));

    civetContext = mg_start(&callbacks, NULL, options);

    return civetContext != NULL;
}

void QCivetServer::stop() {
    mg_stop(civetContext);
    civetContext = NULL;
}

#pragma once

#include <QObject>

#include "restlib.h"
#include "http/qhttpserver.h"
#include "http/qhttprequest.h"
#include "http/qhttpresponse.h"
#include "restrequestlistener.h"

class EXPORT_API RESTServer : public QObject
{
    Q_OBJECT
public:
    explicit RESTServer(QObject *parent = 0);
    bool addRequestListener( RESTRequestListener * listener );
    bool listen( unsigned short port );

signals:

public slots:
    void newRequest(QHttpRequest * request, QHttpResponse * response);

private:
    QHttpServer m_HttpServer;

    QList<RESTRequestListener*> m_Listener;
};

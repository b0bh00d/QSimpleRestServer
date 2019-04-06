#include "restrequestlistener.h"

EXPORT_API
RESTRequestListener::RESTRequestListener(QString resource, QObject *parent) : QObject(parent)
{
    m_Resource = resource;
}


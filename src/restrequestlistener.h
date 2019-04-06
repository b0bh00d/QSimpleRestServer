#pragma once

#include <QObject>
#include <QMap>

#include "restlib.h"

class EXPORT_API RESTRequestListener : public QObject
{
    Q_OBJECT
public:
    explicit RESTRequestListener(QString resource, QObject *parent = 0);
    QString getResource(){ return m_Resource; }

signals:

public slots:

private:
    QString m_Resource;
};

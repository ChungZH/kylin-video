/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp remote_controller.xml -a remotecontroller
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "remotecontroller.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class ControllerAdaptor
 */

ControllerAdaptor::ControllerAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

ControllerAdaptor::~ControllerAdaptor()
{
    // destructor
}

void ControllerAdaptor::playPause()
{
    // handle method call com.kylin.kylinvideo.controller.playPause
    QMetaObject::invokeMethod(parent(), "playPause");
}

void ControllerAdaptor::quit()
{
    // handle method call com.kylin.kylinvideo.controller.quit
    QMetaObject::invokeMethod(parent(), "quit");
}

bool ControllerAdaptor::seek_forward(int seconds)
{
    // handle method call com.kylin.kylinvideo.controller.seek_forward
    bool out0;
    QMetaObject::invokeMethod(parent(), "seek_forward", Q_RETURN_ARG(bool, out0), Q_ARG(int, seconds));
    return out0;
}

bool ControllerAdaptor::seek_rewind(int seconds)
{
    // handle method call com.kylin.kylinvideo.controller.seek_rewind
    bool out0;
    QMetaObject::invokeMethod(parent(), "seek_rewind", Q_RETURN_ARG(bool, out0), Q_ARG(int, seconds));
    return out0;
}

void ControllerAdaptor::stop()
{
    // handle method call com.kylin.kylinvideo.controller.stop
    QMetaObject::invokeMethod(parent(), "stop");
}

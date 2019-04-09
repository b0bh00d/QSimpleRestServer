TEMPLATE = lib
CONFIG += qt dll
QT += core network

INCLUDEPATH += $$PWD/src $$PWD/src/http

INTERMEDIATE_NAME = intermediate
MOC_DIR = $$INTERMEDIATE_NAME/moc
OBJECTS_DIR = $$INTERMEDIATE_NAME/obj
RCC_DIR = $$INTERMEDIATE_NAME/rcc
UI_DIR = $$INTERMEDIATE_NAME/ui

#Include file(s)
include(REST.pri)

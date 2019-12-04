
TEMPLATE = lib
TARGET = LPMapGadget

QT += \
    xml \
    widgets \
    concurrent \
    gui \
    location \
    network \
    opengl \
    positioning \
    qml \
    quick \
    quickwidgets \
    sql \
    svg \
    texttospeech

PATHPLANNER {
    DEFINES += USE_PATHPLANNER
}

include(../../plugin.pri)
include(../../plugins/coreplugin/coreplugin.pri)
#include(../../libs/opmapcontrol/opmapcontrol.pri)
#include(../../plugins/uavobjects/uavobjects.pri)
#include(../../plugins/uavobjectutil/uavobjectutil.pri)
#include(../../plugins/uavtalk/uavtalk.pri)
#include(../../libs/utils/utils.pri)

#include(QtLocationPlugin/QGCLocationPlugin.pri)


#################################
#DEPENDPATH += \
#    . \
#    plugins

#################################
#INCLUDEPATH += .
#################################
#INCLUDEPATH += \
#    QmlControls \
#    QtLocationPlugin \
#    QtLocationPlugin/QMLControl \
#    QtLocationPlugin/comm \
#    Settings \
#    Terrain

OTHER_FILES += LPMapGadget.pluginspec

HEADERS += \
    lpmapplugin.h

SOURCES += \
    lpmapplugin.cpp



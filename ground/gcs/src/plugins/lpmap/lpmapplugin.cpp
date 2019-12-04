#include "lpmapplugin.h"

#include <QtPlugin>
#include <QStringList>
#include <extensionsystem/pluginmanager.h>

LPMapPlugin::LPMapPlugin()
{

}

LPMapPlugin::~LPMapPlugin()
{

}

bool LPMapPlugin::initialize(const QStringList & args, QString *errMsg)
{
    Q_UNUSED(args);
    Q_UNUSED(errMsg);


    return true;
}

void LPMapPlugin::extensionsInitialized()
{
    // Do nothing
}

void LPMapPlugin::shutdown()
{
    // Do nothing
}

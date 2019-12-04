#ifndef LPMAPPLUGIN_H
#define LPMAPPLUGIN_H

#include <extensionsystem/iplugin.h>

class LPMapPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "OpenPilot.LPMap")

public:
    LPMapPlugin();
    ~LPMapPlugin();

    void extensionsInitialized();
    bool initialize(const QStringList & arguments, QString *errorString);
    void shutdown();
};

#endif // LPMAPPLUGIN_H

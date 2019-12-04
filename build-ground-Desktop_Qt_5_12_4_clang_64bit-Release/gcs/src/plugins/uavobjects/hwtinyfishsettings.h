/**
 ******************************************************************************
 *
 * @file       hwtinyfishsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: hwtinyfishsettings.xml. 
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @brief      The UAVUObjects GCS plugin 
 *****************************************************************************/
/* 
 * This program is free software; you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation; either version 3 of the License, or 
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 * for more details.
 * 
 * You should have received a copy of the GNU General Public License along 
 * with this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */
#ifndef HWTINYFISHSETTINGS_H
#define HWTINYFISHSETTINGS_H

#include "uavdataobject.h"


class UAVObjectManager;

class HwTinyFISHSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { UART1PortCount = 2, UART3PortCount = 18, LEDPortCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwTinyFISHSettings_UART1Port : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, ComBridge };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwTinyFISHSettings_UART3Port : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Telemetry, GPS, SBus, DSM, EXBus, HoTTSUMD, HoTTSUMH, SRXL, IBus, DebugConsole, ComBridge, MSP, MAVLink, HoTTTelemetry, FrskySensorHub, PPM, Outputs };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwTinyFISHSettings_LEDPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, WS281x };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT HwTinyFISHSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(HwTinyFISHSettings_UART1Port::Enum uart1Port READ uart1Port WRITE setUART1Port NOTIFY uart1PortChanged)
    Q_PROPERTY(HwTinyFISHSettings_UART3Port::Enum uart3Port READ uart3Port WRITE setUART3Port NOTIFY uart3PortChanged)
    Q_PROPERTY(HwTinyFISHSettings_LEDPort::Enum ledPort READ ledPort WRITE setLEDPort NOTIFY ledPortChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint8 UART1Port READ getUART1Port WRITE setUART1Port NOTIFY UART1PortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 UART3Port READ getUART3Port WRITE setUART3Port NOTIFY UART3PortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 LEDPort READ getLEDPort WRITE setLEDPort NOTIFY LEDPortChanged);


public:
    // Field structure
    typedef struct {
        quint8 UART1Port;
        quint8 UART3Port;
        quint8 LEDPort;

    } __attribute__((packed)) DataFields;

    // Field information
    // UART1Port
    typedef enum { UART1PORT_DISABLED=0, UART1PORT_COMBRIDGE=1 } UART1PortOptions;
    // UART3Port
    typedef enum { UART3PORT_DISABLED=0, UART3PORT_TELEMETRY=1, UART3PORT_GPS=2, UART3PORT_SBUS=3, UART3PORT_DSM=4, UART3PORT_EXBUS=5, UART3PORT_HOTTSUMD=6, UART3PORT_HOTTSUMH=7, UART3PORT_SRXL=8, UART3PORT_IBUS=9, UART3PORT_DEBUGCONSOLE=10, UART3PORT_COMBRIDGE=11, UART3PORT_MSP=12, UART3PORT_MAVLINK=13, UART3PORT_HOTTTELEMETRY=14, UART3PORT_FRSKYSENSORHUB=15, UART3PORT_PPM=16, UART3PORT_OUTPUTS=17 } UART3PortOptions;
    // LEDPort
    typedef enum { LEDPORT_DISABLED=0, LEDPORT_WS281X=1 } LEDPortOptions;


    // Constants
    static const quint32 OBJID = 0xF9736146;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    HwTinyFISHSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static HwTinyFISHSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    HwTinyFISHSettings_UART1Port::Enum uart1Port() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getUART1Port() const { return static_cast<quint8>(uart1Port()); }
    HwTinyFISHSettings_UART3Port::Enum uart3Port() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getUART3Port() const { return static_cast<quint8>(uart3Port()); }
    HwTinyFISHSettings_LEDPort::Enum ledPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getLEDPort() const { return static_cast<quint8>(ledPort()); }


public slots:
    void setUART1Port(const HwTinyFISHSettings_UART1Port::Enum value);
    /*DEPRECATED*/ void setUART1Port(quint8 value) { setUART1Port(static_cast<HwTinyFISHSettings_UART1Port::Enum>(value)); }
    void setUART3Port(const HwTinyFISHSettings_UART3Port::Enum value);
    /*DEPRECATED*/ void setUART3Port(quint8 value) { setUART3Port(static_cast<HwTinyFISHSettings_UART3Port::Enum>(value)); }
    void setLEDPort(const HwTinyFISHSettings_LEDPort::Enum value);
    /*DEPRECATED*/ void setLEDPort(quint8 value) { setLEDPort(static_cast<HwTinyFISHSettings_LEDPort::Enum>(value)); }


signals:
    void uart1PortChanged(const HwTinyFISHSettings_UART1Port::Enum value);
    /*DEPRECATED*/ void UART1PortChanged(quint8 value);
    void uart3PortChanged(const HwTinyFISHSettings_UART3Port::Enum value);
    /*DEPRECATED*/ void UART3PortChanged(quint8 value);
    void ledPortChanged(const HwTinyFISHSettings_LEDPort::Enum value);
    /*DEPRECATED*/ void LEDPortChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // HWTINYFISHSETTINGS_H

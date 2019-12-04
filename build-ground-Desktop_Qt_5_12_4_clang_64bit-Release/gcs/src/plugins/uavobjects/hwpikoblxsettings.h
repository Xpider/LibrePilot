/**
 ******************************************************************************
 *
 * @file       hwpikoblxsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: hwpikoblxsettings.xml. 
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
#ifndef HWPIKOBLXSETTINGS_H
#define HWPIKOBLXSETTINGS_H

#include "uavdataobject.h"


class UAVObjectManager;

class HwPikoBLXSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { UARTPortCount = 16, LEDPortCount = 2, PPMPortCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwPikoBLXSettings_UARTPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Telemetry, GPS, SBus, DSM, EXBus, HoTTSUMD, HoTTSUMH, SRXL, IBus, DebugConsole, ComBridge, MSP, MAVLink, HoTTTelemetry, FrskySensorHub };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwPikoBLXSettings_LEDPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, WS281x };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwPikoBLXSettings_PPMPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Enabled };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT HwPikoBLXSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(HwPikoBLXSettings_UARTPort::Enum uartPort0 READ uartPort0 WRITE setUARTPort0 NOTIFY uartPort0Changed)
    Q_PROPERTY(HwPikoBLXSettings_UARTPort::Enum uartPort1 READ uartPort1 WRITE setUARTPort1 NOTIFY uartPort1Changed)
    Q_PROPERTY(HwPikoBLXSettings_UARTPort::Enum uartPort2 READ uartPort2 WRITE setUARTPort2 NOTIFY uartPort2Changed)
    Q_PROPERTY(HwPikoBLXSettings_LEDPort::Enum ledPort READ ledPort WRITE setLEDPort NOTIFY ledPortChanged)
    Q_PROPERTY(HwPikoBLXSettings_PPMPort::Enum ppmPort READ ppmPort WRITE setPPMPort NOTIFY ppmPortChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint8 UARTPort_0 READ getUARTPort_0 WRITE setUARTPort_0 NOTIFY UARTPort_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 UARTPort_1 READ getUARTPort_1 WRITE setUARTPort_1 NOTIFY UARTPort_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 UARTPort_2 READ getUARTPort_2 WRITE setUARTPort_2 NOTIFY UARTPort_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 LEDPort READ getLEDPort WRITE setLEDPort NOTIFY LEDPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PPMPort READ getPPMPort WRITE setPPMPort NOTIFY PPMPortChanged);


public:
    // Field structure
    typedef struct {
        quint8 UARTPort[3];
        quint8 LEDPort;
        quint8 PPMPort;

    } __attribute__((packed)) DataFields;

    // Field information
    // UARTPort
    typedef enum { UARTPORT_DISABLED=0, UARTPORT_TELEMETRY=1, UARTPORT_GPS=2, UARTPORT_SBUS=3, UARTPORT_DSM=4, UARTPORT_EXBUS=5, UARTPORT_HOTTSUMD=6, UARTPORT_HOTTSUMH=7, UARTPORT_SRXL=8, UARTPORT_IBUS=9, UARTPORT_DEBUGCONSOLE=10, UARTPORT_COMBRIDGE=11, UARTPORT_MSP=12, UARTPORT_MAVLINK=13, UARTPORT_HOTTTELEMETRY=14, UARTPORT_FRSKYSENSORHUB=15 } UARTPortOptions;
    static const quint32 UARTPORT_NUMELEM = 3;
    // LEDPort
    typedef enum { LEDPORT_DISABLED=0, LEDPORT_WS281X=1 } LEDPortOptions;
    // PPMPort
    typedef enum { PPMPORT_DISABLED=0, PPMPORT_ENABLED=1 } PPMPortOptions;


    // Constants
    static const quint32 OBJID = 0xBE5F8824;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    HwPikoBLXSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static HwPikoBLXSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE HwPikoBLXSettings_UARTPort::Enum uartPort(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getUARTPort(quint32 index) const { return static_cast<quint8>(uartPort(index)); }
    HwPikoBLXSettings_UARTPort::Enum uartPort0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getUARTPort_0() const { return static_cast<quint8>(uartPort0()); }
    HwPikoBLXSettings_UARTPort::Enum uartPort1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getUARTPort_1() const { return static_cast<quint8>(uartPort1()); }
    HwPikoBLXSettings_UARTPort::Enum uartPort2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getUARTPort_2() const { return static_cast<quint8>(uartPort2()); }
    HwPikoBLXSettings_LEDPort::Enum ledPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getLEDPort() const { return static_cast<quint8>(ledPort()); }
    HwPikoBLXSettings_PPMPort::Enum ppmPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPPMPort() const { return static_cast<quint8>(ppmPort()); }


public slots:
    Q_INVOKABLE void setUARTPort(quint32 index, const HwPikoBLXSettings_UARTPort::Enum value);
    /*DEPRECATED*/ void setUARTPort(quint32 index, quint8 value) { setUARTPort(index, static_cast<HwPikoBLXSettings_UARTPort::Enum>(value)); }
    void setUARTPort0(const HwPikoBLXSettings_UARTPort::Enum value);
    /*DEPRECATED*/ void setUARTPort_0(quint8 value) { setUARTPort0(static_cast<HwPikoBLXSettings_UARTPort::Enum>(value)); }
    void setUARTPort1(const HwPikoBLXSettings_UARTPort::Enum value);
    /*DEPRECATED*/ void setUARTPort_1(quint8 value) { setUARTPort1(static_cast<HwPikoBLXSettings_UARTPort::Enum>(value)); }
    void setUARTPort2(const HwPikoBLXSettings_UARTPort::Enum value);
    /*DEPRECATED*/ void setUARTPort_2(quint8 value) { setUARTPort2(static_cast<HwPikoBLXSettings_UARTPort::Enum>(value)); }
    void setLEDPort(const HwPikoBLXSettings_LEDPort::Enum value);
    /*DEPRECATED*/ void setLEDPort(quint8 value) { setLEDPort(static_cast<HwPikoBLXSettings_LEDPort::Enum>(value)); }
    void setPPMPort(const HwPikoBLXSettings_PPMPort::Enum value);
    /*DEPRECATED*/ void setPPMPort(quint8 value) { setPPMPort(static_cast<HwPikoBLXSettings_PPMPort::Enum>(value)); }


signals:
    void uartPortChanged(quint32 index, const HwPikoBLXSettings_UARTPort::Enum value);
    /*DEPRECATED*/ void UARTPortChanged(quint32 index, quint8 value);
    void uartPort0Changed(const HwPikoBLXSettings_UARTPort::Enum value);
    /*DEPRECATED*/ void UARTPort_0Changed(quint8 value);
    void uartPort1Changed(const HwPikoBLXSettings_UARTPort::Enum value);
    /*DEPRECATED*/ void UARTPort_1Changed(quint8 value);
    void uartPort2Changed(const HwPikoBLXSettings_UARTPort::Enum value);
    /*DEPRECATED*/ void UARTPort_2Changed(quint8 value);
    void ledPortChanged(const HwPikoBLXSettings_LEDPort::Enum value);
    /*DEPRECATED*/ void LEDPortChanged(quint8 value);
    void ppmPortChanged(const HwPikoBLXSettings_PPMPort::Enum value);
    /*DEPRECATED*/ void PPMPortChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // HWPIKOBLXSETTINGS_H

/**
 ******************************************************************************
 *
 * @file       hwpikoblxsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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

#include "hwpikoblxsettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString HwPikoBLXSettings::NAME = QString("HwPikoBLXSettings");
const QString HwPikoBLXSettings::DESCRIPTION = QString("Furious FPV Piko BLX Micro Flight Controller hardware configuration");
const QString HwPikoBLXSettings::CATEGORY = QString("System");

/**
 * Constructor
 */
HwPikoBLXSettings::HwPikoBLXSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // UARTPort
    QStringList UARTPortElemNames;
    UARTPortElemNames << "0" << "1" << "2";
    QStringList UARTPortEnumOptions;
    UARTPortEnumOptions << "Disabled" << "Telemetry" << "GPS" << "S.Bus" << "DSM" << "EX.Bus" << "HoTT SUMD" << "HoTT SUMH" << "SRXL" << "IBus" << "DebugConsole" << "ComBridge" << "MSP" << "MAVLink" << "HoTT Telemetry" << "FrskySensorHub";
    fields.append(new UAVObjectField("UARTPort", tr(""), "function", UAVObjectField::ENUM, UARTPortElemNames, UARTPortEnumOptions, ";;%EQ:Disabled:S.Bus:DSM:EX.Bus:HoTT SUMD:HoTT SUMH:SRXL:IBus"));
    // LEDPort
    QStringList LEDPortElemNames;
    LEDPortElemNames << "0";
    QStringList LEDPortEnumOptions;
    LEDPortEnumOptions << "Disabled" << "WS281x";
    fields.append(new UAVObjectField("LEDPort", tr(""), "function", UAVObjectField::ENUM, LEDPortElemNames, LEDPortEnumOptions, ""));
    // PPMPort
    QStringList PPMPortElemNames;
    PPMPortElemNames << "0";
    QStringList PPMPortEnumOptions;
    PPMPortEnumOptions << "Disabled" << "Enabled";
    fields.append(new UAVObjectField("PPMPort", tr(""), "function", UAVObjectField::ENUM, PPMPortElemNames, PPMPortEnumOptions, ""));

    // Initialize object
    initializeFields(fields, (quint8 *)&data_, NUMBYTES);
    // Set the default field values
    setDefaultFieldValues();
    // Set the object description
    setDescription(DESCRIPTION);

    // Set the Category of this object type
    setCategory(CATEGORY);

    connect(this, SIGNAL(objectUpdated(UAVObject *)), SLOT(emitNotifications()));
}

/**
 * Get the default metadata for this object
 */
UAVObject::Metadata HwPikoBLXSettings::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_ONCHANGE << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
    metadata.flightTelemetryUpdatePeriod = 0;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void HwPikoBLXSettings::setDefaultFieldValues()
{
    // UARTPort
    data_.UARTPort[0] = 0;
    data_.UARTPort[1] = 0;
    data_.UARTPort[2] = 0;
    // LEDPort
    data_.LEDPort = 0;
    // PPMPort
    data_.PPMPort = 0;

}

/**
 * Get the object data fields
 */
HwPikoBLXSettings::DataFields HwPikoBLXSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void HwPikoBLXSettings::setData(const DataFields& data, bool emitUpdateEvents)
{
    QMutexLocker locker(mutex);
    // Get metadata
    Metadata mdata = getMetadata();
    // Update object if the access mode permits
    if (UAVObject::GetGcsAccess(mdata) == ACCESS_READWRITE) {
        this->data_ = data;
        if (emitUpdateEvents) {
            emit objectUpdatedAuto(this); // trigger object updated event
            emit objectUpdated(this);
        }
    }
}

void HwPikoBLXSettings::emitNotifications()
{
    emit uartPort0Changed(uartPort0());
    /*DEPRECATED*/ emit UARTPort_0Changed(getUARTPort_0());
    emit uartPort1Changed(uartPort1());
    /*DEPRECATED*/ emit UARTPort_1Changed(getUARTPort_1());
    emit uartPort2Changed(uartPort2());
    /*DEPRECATED*/ emit UARTPort_2Changed(getUARTPort_2());
    emit ledPortChanged(ledPort());
    /*DEPRECATED*/ emit LEDPortChanged(getLEDPort());
    emit ppmPortChanged(ppmPort());
    /*DEPRECATED*/ emit PPMPortChanged(getPPMPort());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *HwPikoBLXSettings::clone(quint32 instID)
{
    HwPikoBLXSettings *obj = new HwPikoBLXSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *HwPikoBLXSettings::dirtyClone()
{
    HwPikoBLXSettings *obj = new HwPikoBLXSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
HwPikoBLXSettings *HwPikoBLXSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<HwPikoBLXSettings *>(objMngr->getObject(HwPikoBLXSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void HwPikoBLXSettings::registerQMLTypes() {
    qmlRegisterType<HwPikoBLXSettings>("UAVTalk.HwPikoBLXSettings", 1, 0, "HwPikoBLXSettings");
    qmlRegisterType<HwPikoBLXSettingsConstants>("UAVTalk.HwPikoBLXSettings", 1, 0, "HwPikoBLXSettingsConstants");
    qmlRegisterType<HwPikoBLXSettings_UARTPort>("UAVTalk.HwPikoBLXSettings", 1, 0, "UARTPort");
    qmlRegisterType<HwPikoBLXSettings_LEDPort>("UAVTalk.HwPikoBLXSettings", 1, 0, "LEDPort");
    qmlRegisterType<HwPikoBLXSettings_PPMPort>("UAVTalk.HwPikoBLXSettings", 1, 0, "PPMPort");

}

HwPikoBLXSettings_UARTPort::Enum HwPikoBLXSettings::uartPort(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<HwPikoBLXSettings_UARTPort::Enum>(data_.UARTPort[index]);
}
void HwPikoBLXSettings::setUARTPort(quint32 index, const HwPikoBLXSettings_UARTPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.UARTPort[index] != static_cast<quint8>(value));
   data_.UARTPort[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit uartPortChanged(index, value); emit UARTPortChanged(index, static_cast<quint8>(value)); }
}

HwPikoBLXSettings_UARTPort::Enum HwPikoBLXSettings::uartPort0() const { return uartPort(0); }
void HwPikoBLXSettings::setUARTPort0(const HwPikoBLXSettings_UARTPort::Enum value) { setUARTPort(0, value); }
HwPikoBLXSettings_UARTPort::Enum HwPikoBLXSettings::uartPort1() const { return uartPort(1); }
void HwPikoBLXSettings::setUARTPort1(const HwPikoBLXSettings_UARTPort::Enum value) { setUARTPort(1, value); }
HwPikoBLXSettings_UARTPort::Enum HwPikoBLXSettings::uartPort2() const { return uartPort(2); }
void HwPikoBLXSettings::setUARTPort2(const HwPikoBLXSettings_UARTPort::Enum value) { setUARTPort(2, value); }
HwPikoBLXSettings_LEDPort::Enum HwPikoBLXSettings::ledPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwPikoBLXSettings_LEDPort::Enum>(data_.LEDPort);
}
void HwPikoBLXSettings::setLEDPort(const HwPikoBLXSettings_LEDPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.LEDPort != static_cast<quint8>(value));
   data_.LEDPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit ledPortChanged(value); emit LEDPortChanged(static_cast<quint8>(value)); }
}

HwPikoBLXSettings_PPMPort::Enum HwPikoBLXSettings::ppmPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwPikoBLXSettings_PPMPort::Enum>(data_.PPMPort);
}
void HwPikoBLXSettings::setPPMPort(const HwPikoBLXSettings_PPMPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.PPMPort != static_cast<quint8>(value));
   data_.PPMPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit ppmPortChanged(value); emit PPMPortChanged(static_cast<quint8>(value)); }
}



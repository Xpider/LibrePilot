/**
 ******************************************************************************
 *
 * @file       hwtinyfishsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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

#include "hwtinyfishsettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString HwTinyFISHSettings::NAME = QString("HwTinyFISHSettings");
const QString HwTinyFISHSettings::DESCRIPTION = QString("fishpepper.de tinyFISH Flight Controller hardware configuration");
const QString HwTinyFISHSettings::CATEGORY = QString("System");

/**
 * Constructor
 */
HwTinyFISHSettings::HwTinyFISHSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // UART1Port
    QStringList UART1PortElemNames;
    UART1PortElemNames << "0";
    QStringList UART1PortEnumOptions;
    UART1PortEnumOptions << "Disabled" << "ComBridge";
    fields.append(new UAVObjectField("UART1Port", tr(""), "function", UAVObjectField::ENUM, UART1PortElemNames, UART1PortEnumOptions, ""));
    // UART3Port
    QStringList UART3PortElemNames;
    UART3PortElemNames << "0";
    QStringList UART3PortEnumOptions;
    UART3PortEnumOptions << "Disabled" << "Telemetry" << "GPS" << "S.Bus" << "DSM" << "EX.Bus" << "HoTT SUMD" << "HoTT SUMH" << "SRXL" << "IBus" << "DebugConsole" << "ComBridge" << "MSP" << "MAVLink" << "HoTT Telemetry" << "FrskySensorHub" << "PPM" << "Outputs";
    fields.append(new UAVObjectField("UART3Port", tr(""), "function", UAVObjectField::ENUM, UART3PortElemNames, UART3PortEnumOptions, ""));
    // LEDPort
    QStringList LEDPortElemNames;
    LEDPortElemNames << "0";
    QStringList LEDPortEnumOptions;
    LEDPortEnumOptions << "Disabled" << "WS281x";
    fields.append(new UAVObjectField("LEDPort", tr(""), "function", UAVObjectField::ENUM, LEDPortElemNames, LEDPortEnumOptions, ""));

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
UAVObject::Metadata HwTinyFISHSettings::getDefaultMetadata()
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
void HwTinyFISHSettings::setDefaultFieldValues()
{
    // UART1Port
    data_.UART1Port = 0;
    // UART3Port
    data_.UART3Port = 0;
    // LEDPort
    data_.LEDPort = 0;

}

/**
 * Get the object data fields
 */
HwTinyFISHSettings::DataFields HwTinyFISHSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void HwTinyFISHSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void HwTinyFISHSettings::emitNotifications()
{
    emit uart1PortChanged(uart1Port());
    /*DEPRECATED*/ emit UART1PortChanged(getUART1Port());
    emit uart3PortChanged(uart3Port());
    /*DEPRECATED*/ emit UART3PortChanged(getUART3Port());
    emit ledPortChanged(ledPort());
    /*DEPRECATED*/ emit LEDPortChanged(getLEDPort());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *HwTinyFISHSettings::clone(quint32 instID)
{
    HwTinyFISHSettings *obj = new HwTinyFISHSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *HwTinyFISHSettings::dirtyClone()
{
    HwTinyFISHSettings *obj = new HwTinyFISHSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
HwTinyFISHSettings *HwTinyFISHSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<HwTinyFISHSettings *>(objMngr->getObject(HwTinyFISHSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void HwTinyFISHSettings::registerQMLTypes() {
    qmlRegisterType<HwTinyFISHSettings>("UAVTalk.HwTinyFISHSettings", 1, 0, "HwTinyFISHSettings");
    qmlRegisterType<HwTinyFISHSettingsConstants>("UAVTalk.HwTinyFISHSettings", 1, 0, "HwTinyFISHSettingsConstants");
    qmlRegisterType<HwTinyFISHSettings_UART1Port>("UAVTalk.HwTinyFISHSettings", 1, 0, "UART1Port");
    qmlRegisterType<HwTinyFISHSettings_UART3Port>("UAVTalk.HwTinyFISHSettings", 1, 0, "UART3Port");
    qmlRegisterType<HwTinyFISHSettings_LEDPort>("UAVTalk.HwTinyFISHSettings", 1, 0, "LEDPort");

}

HwTinyFISHSettings_UART1Port::Enum HwTinyFISHSettings::uart1Port() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwTinyFISHSettings_UART1Port::Enum>(data_.UART1Port);
}
void HwTinyFISHSettings::setUART1Port(const HwTinyFISHSettings_UART1Port::Enum value)
{
   mutex->lock();
   bool changed = (data_.UART1Port != static_cast<quint8>(value));
   data_.UART1Port = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit uart1PortChanged(value); emit UART1PortChanged(static_cast<quint8>(value)); }
}

HwTinyFISHSettings_UART3Port::Enum HwTinyFISHSettings::uart3Port() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwTinyFISHSettings_UART3Port::Enum>(data_.UART3Port);
}
void HwTinyFISHSettings::setUART3Port(const HwTinyFISHSettings_UART3Port::Enum value)
{
   mutex->lock();
   bool changed = (data_.UART3Port != static_cast<quint8>(value));
   data_.UART3Port = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit uart3PortChanged(value); emit UART3PortChanged(static_cast<quint8>(value)); }
}

HwTinyFISHSettings_LEDPort::Enum HwTinyFISHSettings::ledPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwTinyFISHSettings_LEDPort::Enum>(data_.LEDPort);
}
void HwTinyFISHSettings::setLEDPort(const HwTinyFISHSettings_LEDPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.LEDPort != static_cast<quint8>(value));
   data_.LEDPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit ledPortChanged(value); emit LEDPortChanged(static_cast<quint8>(value)); }
}



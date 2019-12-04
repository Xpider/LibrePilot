/**
 ******************************************************************************
 *
 * @file       hwspracingf3evosettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: hwspracingf3evosettings.xml.
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

#include "hwspracingf3evosettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString HwSPRacingF3EVOSettings::NAME = QString("HwSPRacingF3EVOSettings");
const QString HwSPRacingF3EVOSettings::DESCRIPTION = QString("Seriously Pro SPRacingF3 EVO hardware configuration.");
const QString HwSPRacingF3EVOSettings::CATEGORY = QString("System");

/**
 * Constructor
 */
HwSPRacingF3EVOSettings::HwSPRacingF3EVOSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // UARTPort
    QStringList UARTPortElemNames;
    UARTPortElemNames << "0" << "1" << "2";
    QStringList UARTPortEnumOptions;
    UARTPortEnumOptions << "Disabled" << "Telemetry" << "GPS" << "S.Bus" << "DSM" << "EX.Bus" << "HoTT SUMD" << "HoTT SUMH" << "SRXL" << "IBus" << "DebugConsole" << "ComBridge" << "MSP" << "MAVLink" << "HoTT Telemetry" << "FrskySensorHub" << "PPM";
    fields.append(new UAVObjectField("UARTPort", tr(""), "function", UAVObjectField::ENUM, UARTPortElemNames, UARTPortEnumOptions, "%NE:PPM;;%NE:PPM"));
    // I2CPort
    QStringList I2CPortElemNames;
    I2CPortElemNames << "0";
    QStringList I2CPortEnumOptions;
    I2CPortEnumOptions << "Disabled" << "I2C";
    fields.append(new UAVObjectField("I2CPort", tr(""), "function", UAVObjectField::ENUM, I2CPortElemNames, I2CPortEnumOptions, ""));
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
UAVObject::Metadata HwSPRacingF3EVOSettings::getDefaultMetadata()
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
void HwSPRacingF3EVOSettings::setDefaultFieldValues()
{
    // UARTPort
    data_.UARTPort[0] = 0;
    data_.UARTPort[1] = 0;
    data_.UARTPort[2] = 0;
    // I2CPort
    data_.I2CPort = 0;
    // LEDPort
    data_.LEDPort = 0;

}

/**
 * Get the object data fields
 */
HwSPRacingF3EVOSettings::DataFields HwSPRacingF3EVOSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void HwSPRacingF3EVOSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void HwSPRacingF3EVOSettings::emitNotifications()
{
    emit uartPort0Changed(uartPort0());
    /*DEPRECATED*/ emit UARTPort_0Changed(getUARTPort_0());
    emit uartPort1Changed(uartPort1());
    /*DEPRECATED*/ emit UARTPort_1Changed(getUARTPort_1());
    emit uartPort2Changed(uartPort2());
    /*DEPRECATED*/ emit UARTPort_2Changed(getUARTPort_2());
    emit i2CPortChanged(i2CPort());
    /*DEPRECATED*/ emit I2CPortChanged(getI2CPort());
    emit ledPortChanged(ledPort());
    /*DEPRECATED*/ emit LEDPortChanged(getLEDPort());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *HwSPRacingF3EVOSettings::clone(quint32 instID)
{
    HwSPRacingF3EVOSettings *obj = new HwSPRacingF3EVOSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *HwSPRacingF3EVOSettings::dirtyClone()
{
    HwSPRacingF3EVOSettings *obj = new HwSPRacingF3EVOSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
HwSPRacingF3EVOSettings *HwSPRacingF3EVOSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<HwSPRacingF3EVOSettings *>(objMngr->getObject(HwSPRacingF3EVOSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void HwSPRacingF3EVOSettings::registerQMLTypes() {
    qmlRegisterType<HwSPRacingF3EVOSettings>("UAVTalk.HwSPRacingF3EVOSettings", 1, 0, "HwSPRacingF3EVOSettings");
    qmlRegisterType<HwSPRacingF3EVOSettingsConstants>("UAVTalk.HwSPRacingF3EVOSettings", 1, 0, "HwSPRacingF3EVOSettingsConstants");
    qmlRegisterType<HwSPRacingF3EVOSettings_UARTPort>("UAVTalk.HwSPRacingF3EVOSettings", 1, 0, "UARTPort");
    qmlRegisterType<HwSPRacingF3EVOSettings_I2CPort>("UAVTalk.HwSPRacingF3EVOSettings", 1, 0, "I2CPort");
    qmlRegisterType<HwSPRacingF3EVOSettings_LEDPort>("UAVTalk.HwSPRacingF3EVOSettings", 1, 0, "LEDPort");

}

HwSPRacingF3EVOSettings_UARTPort::Enum HwSPRacingF3EVOSettings::uartPort(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSPRacingF3EVOSettings_UARTPort::Enum>(data_.UARTPort[index]);
}
void HwSPRacingF3EVOSettings::setUARTPort(quint32 index, const HwSPRacingF3EVOSettings_UARTPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.UARTPort[index] != static_cast<quint8>(value));
   data_.UARTPort[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit uartPortChanged(index, value); emit UARTPortChanged(index, static_cast<quint8>(value)); }
}

HwSPRacingF3EVOSettings_UARTPort::Enum HwSPRacingF3EVOSettings::uartPort0() const { return uartPort(0); }
void HwSPRacingF3EVOSettings::setUARTPort0(const HwSPRacingF3EVOSettings_UARTPort::Enum value) { setUARTPort(0, value); }
HwSPRacingF3EVOSettings_UARTPort::Enum HwSPRacingF3EVOSettings::uartPort1() const { return uartPort(1); }
void HwSPRacingF3EVOSettings::setUARTPort1(const HwSPRacingF3EVOSettings_UARTPort::Enum value) { setUARTPort(1, value); }
HwSPRacingF3EVOSettings_UARTPort::Enum HwSPRacingF3EVOSettings::uartPort2() const { return uartPort(2); }
void HwSPRacingF3EVOSettings::setUARTPort2(const HwSPRacingF3EVOSettings_UARTPort::Enum value) { setUARTPort(2, value); }
HwSPRacingF3EVOSettings_I2CPort::Enum HwSPRacingF3EVOSettings::i2CPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSPRacingF3EVOSettings_I2CPort::Enum>(data_.I2CPort);
}
void HwSPRacingF3EVOSettings::setI2CPort(const HwSPRacingF3EVOSettings_I2CPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.I2CPort != static_cast<quint8>(value));
   data_.I2CPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit i2CPortChanged(value); emit I2CPortChanged(static_cast<quint8>(value)); }
}

HwSPRacingF3EVOSettings_LEDPort::Enum HwSPRacingF3EVOSettings::ledPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSPRacingF3EVOSettings_LEDPort::Enum>(data_.LEDPort);
}
void HwSPRacingF3EVOSettings::setLEDPort(const HwSPRacingF3EVOSettings_LEDPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.LEDPort != static_cast<quint8>(value));
   data_.LEDPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit ledPortChanged(value); emit LEDPortChanged(static_cast<quint8>(value)); }
}



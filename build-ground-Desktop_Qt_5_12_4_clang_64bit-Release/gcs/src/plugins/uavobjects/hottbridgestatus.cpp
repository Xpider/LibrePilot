/**
 ******************************************************************************
 *
 * @file       hottbridgestatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: hottbridgestatus.xml.
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

#include "hottbridgestatus.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString HoTTBridgeStatus::NAME = QString("HoTTBridgeStatus");
const QString HoTTBridgeStatus::DESCRIPTION = QString("HoTTBridge Status Information");
const QString HoTTBridgeStatus::CATEGORY = QString("System");

/**
 * Constructor
 */
HoTTBridgeStatus::HoTTBridgeStatus(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // TxPackets
    QStringList TxPacketsElemNames;
    TxPacketsElemNames << "0";
    fields.append(new UAVObjectField("TxPackets", tr(""), "count", UAVObjectField::UINT32, TxPacketsElemNames, QStringList(), ""));
    // RxPackets
    QStringList RxPacketsElemNames;
    RxPacketsElemNames << "0";
    fields.append(new UAVObjectField("RxPackets", tr(""), "count", UAVObjectField::UINT32, RxPacketsElemNames, QStringList(), ""));
    // TxFail
    QStringList TxFailElemNames;
    TxFailElemNames << "0";
    fields.append(new UAVObjectField("TxFail", tr(""), "count", UAVObjectField::UINT32, TxFailElemNames, QStringList(), ""));
    // RxFail
    QStringList RxFailElemNames;
    RxFailElemNames << "0";
    fields.append(new UAVObjectField("RxFail", tr(""), "count", UAVObjectField::UINT32, RxFailElemNames, QStringList(), ""));

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
UAVObject::Metadata HoTTBridgeStatus::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
    metadata.flightTelemetryUpdatePeriod = 5000;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void HoTTBridgeStatus::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
HoTTBridgeStatus::DataFields HoTTBridgeStatus::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void HoTTBridgeStatus::setData(const DataFields& data, bool emitUpdateEvents)
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

void HoTTBridgeStatus::emitNotifications()
{
    emit txPacketsChanged(txPackets());
    /*DEPRECATED*/ emit TxPacketsChanged(getTxPackets());
    emit rxPacketsChanged(rxPackets());
    /*DEPRECATED*/ emit RxPacketsChanged(getRxPackets());
    emit txFailChanged(txFail());
    /*DEPRECATED*/ emit TxFailChanged(getTxFail());
    emit rxFailChanged(rxFail());
    /*DEPRECATED*/ emit RxFailChanged(getRxFail());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *HoTTBridgeStatus::clone(quint32 instID)
{
    HoTTBridgeStatus *obj = new HoTTBridgeStatus();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *HoTTBridgeStatus::dirtyClone()
{
    HoTTBridgeStatus *obj = new HoTTBridgeStatus();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
HoTTBridgeStatus *HoTTBridgeStatus::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<HoTTBridgeStatus *>(objMngr->getObject(HoTTBridgeStatus::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void HoTTBridgeStatus::registerQMLTypes() {
    qmlRegisterType<HoTTBridgeStatus>("UAVTalk.HoTTBridgeStatus", 1, 0, "HoTTBridgeStatus");
    qmlRegisterType<HoTTBridgeStatusConstants>("UAVTalk.HoTTBridgeStatus", 1, 0, "HoTTBridgeStatusConstants");

}

quint32 HoTTBridgeStatus::txPackets() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.TxPackets);
}
void HoTTBridgeStatus::setTxPackets(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.TxPackets != static_cast<quint32>(value));
   data_.TxPackets = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit txPacketsChanged(value); emit TxPacketsChanged(static_cast<quint32>(value)); }
}

quint32 HoTTBridgeStatus::rxPackets() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.RxPackets);
}
void HoTTBridgeStatus::setRxPackets(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.RxPackets != static_cast<quint32>(value));
   data_.RxPackets = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit rxPacketsChanged(value); emit RxPacketsChanged(static_cast<quint32>(value)); }
}

quint32 HoTTBridgeStatus::txFail() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.TxFail);
}
void HoTTBridgeStatus::setTxFail(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.TxFail != static_cast<quint32>(value));
   data_.TxFail = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit txFailChanged(value); emit TxFailChanged(static_cast<quint32>(value)); }
}

quint32 HoTTBridgeStatus::rxFail() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.RxFail);
}
void HoTTBridgeStatus::setRxFail(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.RxFail != static_cast<quint32>(value));
   data_.RxFail = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit rxFailChanged(value); emit RxFailChanged(static_cast<quint32>(value)); }
}



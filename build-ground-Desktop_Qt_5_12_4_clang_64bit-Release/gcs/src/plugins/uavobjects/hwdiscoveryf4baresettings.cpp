/**
 ******************************************************************************
 *
 * @file       hwdiscoveryf4baresettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: hwdiscoveryf4baresettings.xml.
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

#include "hwdiscoveryf4baresettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString HwDiscoveryF4BareSettings::NAME = QString("HwDiscoveryF4BareSettings");
const QString HwDiscoveryF4BareSettings::DESCRIPTION = QString("DiscoveryF4 Bare hardware configuration");
const QString HwDiscoveryF4BareSettings::CATEGORY = QString("System");

/**
 * Constructor
 */
HwDiscoveryF4BareSettings::HwDiscoveryF4BareSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // BoardRevision
    QStringList BoardRevisionElemNames;
    BoardRevisionElemNames << "0";
    fields.append(new UAVObjectField("BoardRevision", tr(""), "", UAVObjectField::UINT16, BoardRevisionElemNames, QStringList(), ""));
    // BoardType
    QStringList BoardTypeElemNames;
    BoardTypeElemNames << "0";
    fields.append(new UAVObjectField("BoardType", tr(""), "", UAVObjectField::UINT8, BoardTypeElemNames, QStringList(), ""));

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
UAVObject::Metadata HwDiscoveryF4BareSettings::getDefaultMetadata()
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
void HwDiscoveryF4BareSettings::setDefaultFieldValues()
{
    // BoardRevision
    data_.BoardRevision = 0;
    // BoardType
    data_.BoardType = 0;

}

/**
 * Get the object data fields
 */
HwDiscoveryF4BareSettings::DataFields HwDiscoveryF4BareSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void HwDiscoveryF4BareSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void HwDiscoveryF4BareSettings::emitNotifications()
{
    emit boardRevisionChanged(boardRevision());
    /*DEPRECATED*/ emit BoardRevisionChanged(getBoardRevision());
    emit boardTypeChanged(boardType());
    /*DEPRECATED*/ emit BoardTypeChanged(getBoardType());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *HwDiscoveryF4BareSettings::clone(quint32 instID)
{
    HwDiscoveryF4BareSettings *obj = new HwDiscoveryF4BareSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *HwDiscoveryF4BareSettings::dirtyClone()
{
    HwDiscoveryF4BareSettings *obj = new HwDiscoveryF4BareSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
HwDiscoveryF4BareSettings *HwDiscoveryF4BareSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<HwDiscoveryF4BareSettings *>(objMngr->getObject(HwDiscoveryF4BareSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void HwDiscoveryF4BareSettings::registerQMLTypes() {
    qmlRegisterType<HwDiscoveryF4BareSettings>("UAVTalk.HwDiscoveryF4BareSettings", 1, 0, "HwDiscoveryF4BareSettings");
    qmlRegisterType<HwDiscoveryF4BareSettingsConstants>("UAVTalk.HwDiscoveryF4BareSettings", 1, 0, "HwDiscoveryF4BareSettingsConstants");

}

quint16 HwDiscoveryF4BareSettings::boardRevision() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.BoardRevision);
}
void HwDiscoveryF4BareSettings::setBoardRevision(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.BoardRevision != static_cast<quint16>(value));
   data_.BoardRevision = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit boardRevisionChanged(value); emit BoardRevisionChanged(static_cast<quint16>(value)); }
}

quint16 HwDiscoveryF4BareSettings::boardType() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.BoardType);
}
void HwDiscoveryF4BareSettings::setBoardType(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.BoardType != static_cast<quint8>(value));
   data_.BoardType = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit boardTypeChanged(value); emit BoardTypeChanged(static_cast<quint8>(value)); }
}



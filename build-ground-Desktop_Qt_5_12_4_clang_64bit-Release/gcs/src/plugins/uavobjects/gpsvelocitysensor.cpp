/**
 ******************************************************************************
 *
 * @file       gpsvelocitysensor.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: gpsvelocitysensor.xml.
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

#include "gpsvelocitysensor.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString GPSVelocitySensor::NAME = QString("GPSVelocitySensor");
const QString GPSVelocitySensor::DESCRIPTION = QString("Raw GPS velocity in NED frame and m/s from @ref GPSModule.");
const QString GPSVelocitySensor::CATEGORY = QString("Sensors");

/**
 * Constructor
 */
GPSVelocitySensor::GPSVelocitySensor(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // North
    QStringList NorthElemNames;
    NorthElemNames << "0";
    fields.append(new UAVObjectField("North", tr(""), "m/s", UAVObjectField::FLOAT32, NorthElemNames, QStringList(), ""));
    // East
    QStringList EastElemNames;
    EastElemNames << "0";
    fields.append(new UAVObjectField("East", tr(""), "m/s", UAVObjectField::FLOAT32, EastElemNames, QStringList(), ""));
    // Down
    QStringList DownElemNames;
    DownElemNames << "0";
    fields.append(new UAVObjectField("Down", tr(""), "m/s", UAVObjectField::FLOAT32, DownElemNames, QStringList(), ""));

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
UAVObject::Metadata GPSVelocitySensor::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_THROTTLED << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
    metadata.flightTelemetryUpdatePeriod = 1000;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void GPSVelocitySensor::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
GPSVelocitySensor::DataFields GPSVelocitySensor::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void GPSVelocitySensor::setData(const DataFields& data, bool emitUpdateEvents)
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

void GPSVelocitySensor::emitNotifications()
{
    emit northChanged(north());
    /*DEPRECATED*/ emit NorthChanged(getNorth());
    emit eastChanged(east());
    /*DEPRECATED*/ emit EastChanged(getEast());
    emit downChanged(down());
    /*DEPRECATED*/ emit DownChanged(getDown());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *GPSVelocitySensor::clone(quint32 instID)
{
    GPSVelocitySensor *obj = new GPSVelocitySensor();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *GPSVelocitySensor::dirtyClone()
{
    GPSVelocitySensor *obj = new GPSVelocitySensor();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
GPSVelocitySensor *GPSVelocitySensor::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<GPSVelocitySensor *>(objMngr->getObject(GPSVelocitySensor::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void GPSVelocitySensor::registerQMLTypes() {
    qmlRegisterType<GPSVelocitySensor>("UAVTalk.GPSVelocitySensor", 1, 0, "GPSVelocitySensor");
    qmlRegisterType<GPSVelocitySensorConstants>("UAVTalk.GPSVelocitySensor", 1, 0, "GPSVelocitySensorConstants");

}

float GPSVelocitySensor::north() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.North);
}
void GPSVelocitySensor::setNorth(const float value)
{
   mutex->lock();
   bool changed = (data_.North != static_cast<float>(value));
   data_.North = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit northChanged(value); emit NorthChanged(static_cast<float>(value)); }
}

float GPSVelocitySensor::east() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.East);
}
void GPSVelocitySensor::setEast(const float value)
{
   mutex->lock();
   bool changed = (data_.East != static_cast<float>(value));
   data_.East = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit eastChanged(value); emit EastChanged(static_cast<float>(value)); }
}

float GPSVelocitySensor::down() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Down);
}
void GPSVelocitySensor::setDown(const float value)
{
   mutex->lock();
   bool changed = (data_.Down != static_cast<float>(value));
   data_.Down = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit downChanged(value); emit DownChanged(static_cast<float>(value)); }
}


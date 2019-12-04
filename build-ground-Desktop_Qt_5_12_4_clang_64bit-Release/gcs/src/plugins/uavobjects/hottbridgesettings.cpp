/**
 ******************************************************************************
 *
 * @file       hottbridgesettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: hottbridgesettings.xml.
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

#include "hottbridgesettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString HoTTBridgeSettings::NAME = QString("HoTTBridgeSettings");
const QString HoTTBridgeSettings::DESCRIPTION = QString("Settings for the @ref HoTT Telemetry Module");
const QString HoTTBridgeSettings::CATEGORY = QString("System");

/**
 * Constructor
 */
HoTTBridgeSettings::HoTTBridgeSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Limit
    QStringList LimitElemNames;
    LimitElemNames << "MinSpeed" << "MaxSpeed" << "NegDifference1" << "PosDifference1" << "NegDifference2" << "PosDifference2" << "MinHeight" << "MaxHeight" << "MaxDistance" << "MinPowerVoltage" << "MaxPowerVoltage" << "MinSensor1Voltage" << "MaxSensor1Voltage" << "MinSensor2Voltage" << "MaxSensor2Voltage" << "MinCellVoltage" << "MaxCurrent" << "MaxUsedCapacity" << "MinSensor1Temp" << "MaxSensor1Temp" << "MinSensor2Temp" << "MaxSensor2Temp" << "MaxServoTemp" << "MinRPM" << "MaxRPM" << "MinFuel" << "MaxServoDifference";
    fields.append(new UAVObjectField("Limit", tr(""), "(km/h)/(m/s)/m/V/A/mAh/C/ml", UAVObjectField::FLOAT32, LimitElemNames, QStringList(), ""));
    // Sensor
    QStringList SensorElemNames;
    SensorElemNames << "VARIO" << "GPS" << "EAM" << "GAM" << "ESC";
    QStringList SensorEnumOptions;
    SensorEnumOptions << "Disabled" << "Enabled";
    fields.append(new UAVObjectField("Sensor", tr(""), "", UAVObjectField::ENUM, SensorElemNames, SensorEnumOptions, ""));
    // Warning
    QStringList WarningElemNames;
    WarningElemNames << "AltitudeBeep" << "MinSpeed" << "MaxSpeed" << "NegDifference1" << "PosDifference1" << "NegDifference2" << "PosDifference2" << "MinHeight" << "MaxHeight" << "MaxDistance" << "MinPowerVoltage" << "MaxPowerVoltage" << "MinSensor1Voltage" << "MaxSensor1Voltage" << "MinSensor2Voltage" << "MaxSensor2Voltage" << "MinCellVoltage" << "MaxCurrent" << "MaxUsedCapacity" << "MinSensor1Temp" << "MaxSensor1Temp" << "MinSensor2Temp" << "MaxSensor2Temp" << "MaxServoTemp" << "MinRPM" << "MaxRPM" << "MinFuel" << "MaxServoDifference";
    QStringList WarningEnumOptions;
    WarningEnumOptions << "Disabled" << "Enabled";
    fields.append(new UAVObjectField("Warning", tr(""), "", UAVObjectField::ENUM, WarningElemNames, WarningEnumOptions, ""));

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
UAVObject::Metadata HoTTBridgeSettings::getDefaultMetadata()
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
void HoTTBridgeSettings::setDefaultFieldValues()
{
    // Limit
    data_.Limit[0] = 30;
    data_.Limit[1] = 100;
    data_.Limit[2] = -10;
    data_.Limit[3] = 10;
    data_.Limit[4] = -1;
    data_.Limit[5] = 1;
    data_.Limit[6] = 20;
    data_.Limit[7] = 500;
    data_.Limit[8] = 1500;
    data_.Limit[9] = 5;
    data_.Limit[10] = 30;
    data_.Limit[11] = 5;
    data_.Limit[12] = 30;
    data_.Limit[13] = 5;
    data_.Limit[14] = 30;
    data_.Limit[15] = 3.3;
    data_.Limit[16] = 40;
    data_.Limit[17] = 2000;
    data_.Limit[18] = 0;
    data_.Limit[19] = 100;
    data_.Limit[20] = 0;
    data_.Limit[21] = 100;
    data_.Limit[22] = 100;
    data_.Limit[23] = 100;
    data_.Limit[24] = 7000;
    data_.Limit[25] = 1000;
    data_.Limit[26] = 0;
    // Sensor
    data_.Sensor[0] = 0;
    data_.Sensor[1] = 0;
    data_.Sensor[2] = 0;
    data_.Sensor[3] = 0;
    data_.Sensor[4] = 0;
    // Warning
    data_.Warning[0] = 0;
    data_.Warning[1] = 0;
    data_.Warning[2] = 0;
    data_.Warning[3] = 0;
    data_.Warning[4] = 0;
    data_.Warning[5] = 0;
    data_.Warning[6] = 0;
    data_.Warning[7] = 0;
    data_.Warning[8] = 0;
    data_.Warning[9] = 0;
    data_.Warning[10] = 0;
    data_.Warning[11] = 0;
    data_.Warning[12] = 0;
    data_.Warning[13] = 0;
    data_.Warning[14] = 0;
    data_.Warning[15] = 0;
    data_.Warning[16] = 0;
    data_.Warning[17] = 0;
    data_.Warning[18] = 0;
    data_.Warning[19] = 0;
    data_.Warning[20] = 0;
    data_.Warning[21] = 0;
    data_.Warning[22] = 0;
    data_.Warning[23] = 0;
    data_.Warning[24] = 0;
    data_.Warning[25] = 0;
    data_.Warning[26] = 0;
    data_.Warning[27] = 0;

}

/**
 * Get the object data fields
 */
HoTTBridgeSettings::DataFields HoTTBridgeSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void HoTTBridgeSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void HoTTBridgeSettings::emitNotifications()
{
    emit limitMinSpeedChanged(limitMinSpeed());
    /*DEPRECATED*/ emit Limit_MinSpeedChanged(getLimit_MinSpeed());
    emit limitMaxSpeedChanged(limitMaxSpeed());
    /*DEPRECATED*/ emit Limit_MaxSpeedChanged(getLimit_MaxSpeed());
    emit limitNegDifference1Changed(limitNegDifference1());
    /*DEPRECATED*/ emit Limit_NegDifference1Changed(getLimit_NegDifference1());
    emit limitPosDifference1Changed(limitPosDifference1());
    /*DEPRECATED*/ emit Limit_PosDifference1Changed(getLimit_PosDifference1());
    emit limitNegDifference2Changed(limitNegDifference2());
    /*DEPRECATED*/ emit Limit_NegDifference2Changed(getLimit_NegDifference2());
    emit limitPosDifference2Changed(limitPosDifference2());
    /*DEPRECATED*/ emit Limit_PosDifference2Changed(getLimit_PosDifference2());
    emit limitMinHeightChanged(limitMinHeight());
    /*DEPRECATED*/ emit Limit_MinHeightChanged(getLimit_MinHeight());
    emit limitMaxHeightChanged(limitMaxHeight());
    /*DEPRECATED*/ emit Limit_MaxHeightChanged(getLimit_MaxHeight());
    emit limitMaxDistanceChanged(limitMaxDistance());
    /*DEPRECATED*/ emit Limit_MaxDistanceChanged(getLimit_MaxDistance());
    emit limitMinPowerVoltageChanged(limitMinPowerVoltage());
    /*DEPRECATED*/ emit Limit_MinPowerVoltageChanged(getLimit_MinPowerVoltage());
    emit limitMaxPowerVoltageChanged(limitMaxPowerVoltage());
    /*DEPRECATED*/ emit Limit_MaxPowerVoltageChanged(getLimit_MaxPowerVoltage());
    emit limitMinSensor1VoltageChanged(limitMinSensor1Voltage());
    /*DEPRECATED*/ emit Limit_MinSensor1VoltageChanged(getLimit_MinSensor1Voltage());
    emit limitMaxSensor1VoltageChanged(limitMaxSensor1Voltage());
    /*DEPRECATED*/ emit Limit_MaxSensor1VoltageChanged(getLimit_MaxSensor1Voltage());
    emit limitMinSensor2VoltageChanged(limitMinSensor2Voltage());
    /*DEPRECATED*/ emit Limit_MinSensor2VoltageChanged(getLimit_MinSensor2Voltage());
    emit limitMaxSensor2VoltageChanged(limitMaxSensor2Voltage());
    /*DEPRECATED*/ emit Limit_MaxSensor2VoltageChanged(getLimit_MaxSensor2Voltage());
    emit limitMinCellVoltageChanged(limitMinCellVoltage());
    /*DEPRECATED*/ emit Limit_MinCellVoltageChanged(getLimit_MinCellVoltage());
    emit limitMaxCurrentChanged(limitMaxCurrent());
    /*DEPRECATED*/ emit Limit_MaxCurrentChanged(getLimit_MaxCurrent());
    emit limitMaxUsedCapacityChanged(limitMaxUsedCapacity());
    /*DEPRECATED*/ emit Limit_MaxUsedCapacityChanged(getLimit_MaxUsedCapacity());
    emit limitMinSensor1TempChanged(limitMinSensor1Temp());
    /*DEPRECATED*/ emit Limit_MinSensor1TempChanged(getLimit_MinSensor1Temp());
    emit limitMaxSensor1TempChanged(limitMaxSensor1Temp());
    /*DEPRECATED*/ emit Limit_MaxSensor1TempChanged(getLimit_MaxSensor1Temp());
    emit limitMinSensor2TempChanged(limitMinSensor2Temp());
    /*DEPRECATED*/ emit Limit_MinSensor2TempChanged(getLimit_MinSensor2Temp());
    emit limitMaxSensor2TempChanged(limitMaxSensor2Temp());
    /*DEPRECATED*/ emit Limit_MaxSensor2TempChanged(getLimit_MaxSensor2Temp());
    emit limitMaxServoTempChanged(limitMaxServoTemp());
    /*DEPRECATED*/ emit Limit_MaxServoTempChanged(getLimit_MaxServoTemp());
    emit limitMinRPMChanged(limitMinRPM());
    /*DEPRECATED*/ emit Limit_MinRPMChanged(getLimit_MinRPM());
    emit limitMaxRPMChanged(limitMaxRPM());
    /*DEPRECATED*/ emit Limit_MaxRPMChanged(getLimit_MaxRPM());
    emit limitMinFuelChanged(limitMinFuel());
    /*DEPRECATED*/ emit Limit_MinFuelChanged(getLimit_MinFuel());
    emit limitMaxServoDifferenceChanged(limitMaxServoDifference());
    /*DEPRECATED*/ emit Limit_MaxServoDifferenceChanged(getLimit_MaxServoDifference());
    emit sensorVARIOChanged(sensorVARIO());
    /*DEPRECATED*/ emit Sensor_VARIOChanged(getSensor_VARIO());
    emit sensorGPSChanged(sensorGPS());
    /*DEPRECATED*/ emit Sensor_GPSChanged(getSensor_GPS());
    emit sensorEAMChanged(sensorEAM());
    /*DEPRECATED*/ emit Sensor_EAMChanged(getSensor_EAM());
    emit sensorGAMChanged(sensorGAM());
    /*DEPRECATED*/ emit Sensor_GAMChanged(getSensor_GAM());
    emit sensorESCChanged(sensorESC());
    /*DEPRECATED*/ emit Sensor_ESCChanged(getSensor_ESC());
    emit warningAltitudeBeepChanged(warningAltitudeBeep());
    /*DEPRECATED*/ emit Warning_AltitudeBeepChanged(getWarning_AltitudeBeep());
    emit warningMinSpeedChanged(warningMinSpeed());
    /*DEPRECATED*/ emit Warning_MinSpeedChanged(getWarning_MinSpeed());
    emit warningMaxSpeedChanged(warningMaxSpeed());
    /*DEPRECATED*/ emit Warning_MaxSpeedChanged(getWarning_MaxSpeed());
    emit warningNegDifference1Changed(warningNegDifference1());
    /*DEPRECATED*/ emit Warning_NegDifference1Changed(getWarning_NegDifference1());
    emit warningPosDifference1Changed(warningPosDifference1());
    /*DEPRECATED*/ emit Warning_PosDifference1Changed(getWarning_PosDifference1());
    emit warningNegDifference2Changed(warningNegDifference2());
    /*DEPRECATED*/ emit Warning_NegDifference2Changed(getWarning_NegDifference2());
    emit warningPosDifference2Changed(warningPosDifference2());
    /*DEPRECATED*/ emit Warning_PosDifference2Changed(getWarning_PosDifference2());
    emit warningMinHeightChanged(warningMinHeight());
    /*DEPRECATED*/ emit Warning_MinHeightChanged(getWarning_MinHeight());
    emit warningMaxHeightChanged(warningMaxHeight());
    /*DEPRECATED*/ emit Warning_MaxHeightChanged(getWarning_MaxHeight());
    emit warningMaxDistanceChanged(warningMaxDistance());
    /*DEPRECATED*/ emit Warning_MaxDistanceChanged(getWarning_MaxDistance());
    emit warningMinPowerVoltageChanged(warningMinPowerVoltage());
    /*DEPRECATED*/ emit Warning_MinPowerVoltageChanged(getWarning_MinPowerVoltage());
    emit warningMaxPowerVoltageChanged(warningMaxPowerVoltage());
    /*DEPRECATED*/ emit Warning_MaxPowerVoltageChanged(getWarning_MaxPowerVoltage());
    emit warningMinSensor1VoltageChanged(warningMinSensor1Voltage());
    /*DEPRECATED*/ emit Warning_MinSensor1VoltageChanged(getWarning_MinSensor1Voltage());
    emit warningMaxSensor1VoltageChanged(warningMaxSensor1Voltage());
    /*DEPRECATED*/ emit Warning_MaxSensor1VoltageChanged(getWarning_MaxSensor1Voltage());
    emit warningMinSensor2VoltageChanged(warningMinSensor2Voltage());
    /*DEPRECATED*/ emit Warning_MinSensor2VoltageChanged(getWarning_MinSensor2Voltage());
    emit warningMaxSensor2VoltageChanged(warningMaxSensor2Voltage());
    /*DEPRECATED*/ emit Warning_MaxSensor2VoltageChanged(getWarning_MaxSensor2Voltage());
    emit warningMinCellVoltageChanged(warningMinCellVoltage());
    /*DEPRECATED*/ emit Warning_MinCellVoltageChanged(getWarning_MinCellVoltage());
    emit warningMaxCurrentChanged(warningMaxCurrent());
    /*DEPRECATED*/ emit Warning_MaxCurrentChanged(getWarning_MaxCurrent());
    emit warningMaxUsedCapacityChanged(warningMaxUsedCapacity());
    /*DEPRECATED*/ emit Warning_MaxUsedCapacityChanged(getWarning_MaxUsedCapacity());
    emit warningMinSensor1TempChanged(warningMinSensor1Temp());
    /*DEPRECATED*/ emit Warning_MinSensor1TempChanged(getWarning_MinSensor1Temp());
    emit warningMaxSensor1TempChanged(warningMaxSensor1Temp());
    /*DEPRECATED*/ emit Warning_MaxSensor1TempChanged(getWarning_MaxSensor1Temp());
    emit warningMinSensor2TempChanged(warningMinSensor2Temp());
    /*DEPRECATED*/ emit Warning_MinSensor2TempChanged(getWarning_MinSensor2Temp());
    emit warningMaxSensor2TempChanged(warningMaxSensor2Temp());
    /*DEPRECATED*/ emit Warning_MaxSensor2TempChanged(getWarning_MaxSensor2Temp());
    emit warningMaxServoTempChanged(warningMaxServoTemp());
    /*DEPRECATED*/ emit Warning_MaxServoTempChanged(getWarning_MaxServoTemp());
    emit warningMinRPMChanged(warningMinRPM());
    /*DEPRECATED*/ emit Warning_MinRPMChanged(getWarning_MinRPM());
    emit warningMaxRPMChanged(warningMaxRPM());
    /*DEPRECATED*/ emit Warning_MaxRPMChanged(getWarning_MaxRPM());
    emit warningMinFuelChanged(warningMinFuel());
    /*DEPRECATED*/ emit Warning_MinFuelChanged(getWarning_MinFuel());
    emit warningMaxServoDifferenceChanged(warningMaxServoDifference());
    /*DEPRECATED*/ emit Warning_MaxServoDifferenceChanged(getWarning_MaxServoDifference());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *HoTTBridgeSettings::clone(quint32 instID)
{
    HoTTBridgeSettings *obj = new HoTTBridgeSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *HoTTBridgeSettings::dirtyClone()
{
    HoTTBridgeSettings *obj = new HoTTBridgeSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
HoTTBridgeSettings *HoTTBridgeSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<HoTTBridgeSettings *>(objMngr->getObject(HoTTBridgeSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void HoTTBridgeSettings::registerQMLTypes() {
    qmlRegisterType<HoTTBridgeSettings>("UAVTalk.HoTTBridgeSettings", 1, 0, "HoTTBridgeSettings");
    qmlRegisterType<HoTTBridgeSettingsConstants>("UAVTalk.HoTTBridgeSettings", 1, 0, "HoTTBridgeSettingsConstants");
    qmlRegisterType<HoTTBridgeSettings_Sensor>("UAVTalk.HoTTBridgeSettings", 1, 0, "Sensor");
    qmlRegisterType<HoTTBridgeSettings_Warning>("UAVTalk.HoTTBridgeSettings", 1, 0, "Warning");

}

float HoTTBridgeSettings::limit(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Limit[index]);
}
void HoTTBridgeSettings::setLimit(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.Limit[index] != static_cast<float>(value));
   data_.Limit[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit limitChanged(index, value); emit LimitChanged(index, static_cast<float>(value)); }
}

float HoTTBridgeSettings::limitMinSpeed() const { return limit(0); }
void HoTTBridgeSettings::setLimitMinSpeed(const float value) { setLimit(0, value); }
float HoTTBridgeSettings::limitMaxSpeed() const { return limit(1); }
void HoTTBridgeSettings::setLimitMaxSpeed(const float value) { setLimit(1, value); }
float HoTTBridgeSettings::limitNegDifference1() const { return limit(2); }
void HoTTBridgeSettings::setLimitNegDifference1(const float value) { setLimit(2, value); }
float HoTTBridgeSettings::limitPosDifference1() const { return limit(3); }
void HoTTBridgeSettings::setLimitPosDifference1(const float value) { setLimit(3, value); }
float HoTTBridgeSettings::limitNegDifference2() const { return limit(4); }
void HoTTBridgeSettings::setLimitNegDifference2(const float value) { setLimit(4, value); }
float HoTTBridgeSettings::limitPosDifference2() const { return limit(5); }
void HoTTBridgeSettings::setLimitPosDifference2(const float value) { setLimit(5, value); }
float HoTTBridgeSettings::limitMinHeight() const { return limit(6); }
void HoTTBridgeSettings::setLimitMinHeight(const float value) { setLimit(6, value); }
float HoTTBridgeSettings::limitMaxHeight() const { return limit(7); }
void HoTTBridgeSettings::setLimitMaxHeight(const float value) { setLimit(7, value); }
float HoTTBridgeSettings::limitMaxDistance() const { return limit(8); }
void HoTTBridgeSettings::setLimitMaxDistance(const float value) { setLimit(8, value); }
float HoTTBridgeSettings::limitMinPowerVoltage() const { return limit(9); }
void HoTTBridgeSettings::setLimitMinPowerVoltage(const float value) { setLimit(9, value); }
float HoTTBridgeSettings::limitMaxPowerVoltage() const { return limit(10); }
void HoTTBridgeSettings::setLimitMaxPowerVoltage(const float value) { setLimit(10, value); }
float HoTTBridgeSettings::limitMinSensor1Voltage() const { return limit(11); }
void HoTTBridgeSettings::setLimitMinSensor1Voltage(const float value) { setLimit(11, value); }
float HoTTBridgeSettings::limitMaxSensor1Voltage() const { return limit(12); }
void HoTTBridgeSettings::setLimitMaxSensor1Voltage(const float value) { setLimit(12, value); }
float HoTTBridgeSettings::limitMinSensor2Voltage() const { return limit(13); }
void HoTTBridgeSettings::setLimitMinSensor2Voltage(const float value) { setLimit(13, value); }
float HoTTBridgeSettings::limitMaxSensor2Voltage() const { return limit(14); }
void HoTTBridgeSettings::setLimitMaxSensor2Voltage(const float value) { setLimit(14, value); }
float HoTTBridgeSettings::limitMinCellVoltage() const { return limit(15); }
void HoTTBridgeSettings::setLimitMinCellVoltage(const float value) { setLimit(15, value); }
float HoTTBridgeSettings::limitMaxCurrent() const { return limit(16); }
void HoTTBridgeSettings::setLimitMaxCurrent(const float value) { setLimit(16, value); }
float HoTTBridgeSettings::limitMaxUsedCapacity() const { return limit(17); }
void HoTTBridgeSettings::setLimitMaxUsedCapacity(const float value) { setLimit(17, value); }
float HoTTBridgeSettings::limitMinSensor1Temp() const { return limit(18); }
void HoTTBridgeSettings::setLimitMinSensor1Temp(const float value) { setLimit(18, value); }
float HoTTBridgeSettings::limitMaxSensor1Temp() const { return limit(19); }
void HoTTBridgeSettings::setLimitMaxSensor1Temp(const float value) { setLimit(19, value); }
float HoTTBridgeSettings::limitMinSensor2Temp() const { return limit(20); }
void HoTTBridgeSettings::setLimitMinSensor2Temp(const float value) { setLimit(20, value); }
float HoTTBridgeSettings::limitMaxSensor2Temp() const { return limit(21); }
void HoTTBridgeSettings::setLimitMaxSensor2Temp(const float value) { setLimit(21, value); }
float HoTTBridgeSettings::limitMaxServoTemp() const { return limit(22); }
void HoTTBridgeSettings::setLimitMaxServoTemp(const float value) { setLimit(22, value); }
float HoTTBridgeSettings::limitMinRPM() const { return limit(23); }
void HoTTBridgeSettings::setLimitMinRPM(const float value) { setLimit(23, value); }
float HoTTBridgeSettings::limitMaxRPM() const { return limit(24); }
void HoTTBridgeSettings::setLimitMaxRPM(const float value) { setLimit(24, value); }
float HoTTBridgeSettings::limitMinFuel() const { return limit(25); }
void HoTTBridgeSettings::setLimitMinFuel(const float value) { setLimit(25, value); }
float HoTTBridgeSettings::limitMaxServoDifference() const { return limit(26); }
void HoTTBridgeSettings::setLimitMaxServoDifference(const float value) { setLimit(26, value); }
HoTTBridgeSettings_Sensor::Enum HoTTBridgeSettings::sensor(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<HoTTBridgeSettings_Sensor::Enum>(data_.Sensor[index]);
}
void HoTTBridgeSettings::setSensor(quint32 index, const HoTTBridgeSettings_Sensor::Enum value)
{
   mutex->lock();
   bool changed = (data_.Sensor[index] != static_cast<quint8>(value));
   data_.Sensor[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit sensorChanged(index, value); emit SensorChanged(index, static_cast<quint8>(value)); }
}

HoTTBridgeSettings_Sensor::Enum HoTTBridgeSettings::sensorVARIO() const { return sensor(0); }
void HoTTBridgeSettings::setSensorVARIO(const HoTTBridgeSettings_Sensor::Enum value) { setSensor(0, value); }
HoTTBridgeSettings_Sensor::Enum HoTTBridgeSettings::sensorGPS() const { return sensor(1); }
void HoTTBridgeSettings::setSensorGPS(const HoTTBridgeSettings_Sensor::Enum value) { setSensor(1, value); }
HoTTBridgeSettings_Sensor::Enum HoTTBridgeSettings::sensorEAM() const { return sensor(2); }
void HoTTBridgeSettings::setSensorEAM(const HoTTBridgeSettings_Sensor::Enum value) { setSensor(2, value); }
HoTTBridgeSettings_Sensor::Enum HoTTBridgeSettings::sensorGAM() const { return sensor(3); }
void HoTTBridgeSettings::setSensorGAM(const HoTTBridgeSettings_Sensor::Enum value) { setSensor(3, value); }
HoTTBridgeSettings_Sensor::Enum HoTTBridgeSettings::sensorESC() const { return sensor(4); }
void HoTTBridgeSettings::setSensorESC(const HoTTBridgeSettings_Sensor::Enum value) { setSensor(4, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warning(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<HoTTBridgeSettings_Warning::Enum>(data_.Warning[index]);
}
void HoTTBridgeSettings::setWarning(quint32 index, const HoTTBridgeSettings_Warning::Enum value)
{
   mutex->lock();
   bool changed = (data_.Warning[index] != static_cast<quint8>(value));
   data_.Warning[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit warningChanged(index, value); emit WarningChanged(index, static_cast<quint8>(value)); }
}

HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningAltitudeBeep() const { return warning(0); }
void HoTTBridgeSettings::setWarningAltitudeBeep(const HoTTBridgeSettings_Warning::Enum value) { setWarning(0, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMinSpeed() const { return warning(1); }
void HoTTBridgeSettings::setWarningMinSpeed(const HoTTBridgeSettings_Warning::Enum value) { setWarning(1, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMaxSpeed() const { return warning(2); }
void HoTTBridgeSettings::setWarningMaxSpeed(const HoTTBridgeSettings_Warning::Enum value) { setWarning(2, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningNegDifference1() const { return warning(3); }
void HoTTBridgeSettings::setWarningNegDifference1(const HoTTBridgeSettings_Warning::Enum value) { setWarning(3, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningPosDifference1() const { return warning(4); }
void HoTTBridgeSettings::setWarningPosDifference1(const HoTTBridgeSettings_Warning::Enum value) { setWarning(4, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningNegDifference2() const { return warning(5); }
void HoTTBridgeSettings::setWarningNegDifference2(const HoTTBridgeSettings_Warning::Enum value) { setWarning(5, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningPosDifference2() const { return warning(6); }
void HoTTBridgeSettings::setWarningPosDifference2(const HoTTBridgeSettings_Warning::Enum value) { setWarning(6, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMinHeight() const { return warning(7); }
void HoTTBridgeSettings::setWarningMinHeight(const HoTTBridgeSettings_Warning::Enum value) { setWarning(7, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMaxHeight() const { return warning(8); }
void HoTTBridgeSettings::setWarningMaxHeight(const HoTTBridgeSettings_Warning::Enum value) { setWarning(8, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMaxDistance() const { return warning(9); }
void HoTTBridgeSettings::setWarningMaxDistance(const HoTTBridgeSettings_Warning::Enum value) { setWarning(9, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMinPowerVoltage() const { return warning(10); }
void HoTTBridgeSettings::setWarningMinPowerVoltage(const HoTTBridgeSettings_Warning::Enum value) { setWarning(10, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMaxPowerVoltage() const { return warning(11); }
void HoTTBridgeSettings::setWarningMaxPowerVoltage(const HoTTBridgeSettings_Warning::Enum value) { setWarning(11, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMinSensor1Voltage() const { return warning(12); }
void HoTTBridgeSettings::setWarningMinSensor1Voltage(const HoTTBridgeSettings_Warning::Enum value) { setWarning(12, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMaxSensor1Voltage() const { return warning(13); }
void HoTTBridgeSettings::setWarningMaxSensor1Voltage(const HoTTBridgeSettings_Warning::Enum value) { setWarning(13, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMinSensor2Voltage() const { return warning(14); }
void HoTTBridgeSettings::setWarningMinSensor2Voltage(const HoTTBridgeSettings_Warning::Enum value) { setWarning(14, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMaxSensor2Voltage() const { return warning(15); }
void HoTTBridgeSettings::setWarningMaxSensor2Voltage(const HoTTBridgeSettings_Warning::Enum value) { setWarning(15, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMinCellVoltage() const { return warning(16); }
void HoTTBridgeSettings::setWarningMinCellVoltage(const HoTTBridgeSettings_Warning::Enum value) { setWarning(16, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMaxCurrent() const { return warning(17); }
void HoTTBridgeSettings::setWarningMaxCurrent(const HoTTBridgeSettings_Warning::Enum value) { setWarning(17, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMaxUsedCapacity() const { return warning(18); }
void HoTTBridgeSettings::setWarningMaxUsedCapacity(const HoTTBridgeSettings_Warning::Enum value) { setWarning(18, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMinSensor1Temp() const { return warning(19); }
void HoTTBridgeSettings::setWarningMinSensor1Temp(const HoTTBridgeSettings_Warning::Enum value) { setWarning(19, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMaxSensor1Temp() const { return warning(20); }
void HoTTBridgeSettings::setWarningMaxSensor1Temp(const HoTTBridgeSettings_Warning::Enum value) { setWarning(20, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMinSensor2Temp() const { return warning(21); }
void HoTTBridgeSettings::setWarningMinSensor2Temp(const HoTTBridgeSettings_Warning::Enum value) { setWarning(21, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMaxSensor2Temp() const { return warning(22); }
void HoTTBridgeSettings::setWarningMaxSensor2Temp(const HoTTBridgeSettings_Warning::Enum value) { setWarning(22, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMaxServoTemp() const { return warning(23); }
void HoTTBridgeSettings::setWarningMaxServoTemp(const HoTTBridgeSettings_Warning::Enum value) { setWarning(23, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMinRPM() const { return warning(24); }
void HoTTBridgeSettings::setWarningMinRPM(const HoTTBridgeSettings_Warning::Enum value) { setWarning(24, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMaxRPM() const { return warning(25); }
void HoTTBridgeSettings::setWarningMaxRPM(const HoTTBridgeSettings_Warning::Enum value) { setWarning(25, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMinFuel() const { return warning(26); }
void HoTTBridgeSettings::setWarningMinFuel(const HoTTBridgeSettings_Warning::Enum value) { setWarning(26, value); }
HoTTBridgeSettings_Warning::Enum HoTTBridgeSettings::warningMaxServoDifference() const { return warning(27); }
void HoTTBridgeSettings::setWarningMaxServoDifference(const HoTTBridgeSettings_Warning::Enum value) { setWarning(27, value); }


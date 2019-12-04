/**
 ******************************************************************************
 *
 * @file       hottbridgesettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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
#ifndef HOTTBRIDGESETTINGS_H
#define HOTTBRIDGESETTINGS_H

#include "uavdataobject.h"


class UAVObjectManager;

class HoTTBridgeSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { SensorCount = 2, WarningCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HoTTBridgeSettings_Sensor : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Enabled };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HoTTBridgeSettings_Warning : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Enabled };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT HoTTBridgeSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float limitMinSpeed READ limitMinSpeed WRITE setLimitMinSpeed NOTIFY limitMinSpeedChanged)
    Q_PROPERTY(float limitMaxSpeed READ limitMaxSpeed WRITE setLimitMaxSpeed NOTIFY limitMaxSpeedChanged)
    Q_PROPERTY(float limitNegDifference1 READ limitNegDifference1 WRITE setLimitNegDifference1 NOTIFY limitNegDifference1Changed)
    Q_PROPERTY(float limitPosDifference1 READ limitPosDifference1 WRITE setLimitPosDifference1 NOTIFY limitPosDifference1Changed)
    Q_PROPERTY(float limitNegDifference2 READ limitNegDifference2 WRITE setLimitNegDifference2 NOTIFY limitNegDifference2Changed)
    Q_PROPERTY(float limitPosDifference2 READ limitPosDifference2 WRITE setLimitPosDifference2 NOTIFY limitPosDifference2Changed)
    Q_PROPERTY(float limitMinHeight READ limitMinHeight WRITE setLimitMinHeight NOTIFY limitMinHeightChanged)
    Q_PROPERTY(float limitMaxHeight READ limitMaxHeight WRITE setLimitMaxHeight NOTIFY limitMaxHeightChanged)
    Q_PROPERTY(float limitMaxDistance READ limitMaxDistance WRITE setLimitMaxDistance NOTIFY limitMaxDistanceChanged)
    Q_PROPERTY(float limitMinPowerVoltage READ limitMinPowerVoltage WRITE setLimitMinPowerVoltage NOTIFY limitMinPowerVoltageChanged)
    Q_PROPERTY(float limitMaxPowerVoltage READ limitMaxPowerVoltage WRITE setLimitMaxPowerVoltage NOTIFY limitMaxPowerVoltageChanged)
    Q_PROPERTY(float limitMinSensor1Voltage READ limitMinSensor1Voltage WRITE setLimitMinSensor1Voltage NOTIFY limitMinSensor1VoltageChanged)
    Q_PROPERTY(float limitMaxSensor1Voltage READ limitMaxSensor1Voltage WRITE setLimitMaxSensor1Voltage NOTIFY limitMaxSensor1VoltageChanged)
    Q_PROPERTY(float limitMinSensor2Voltage READ limitMinSensor2Voltage WRITE setLimitMinSensor2Voltage NOTIFY limitMinSensor2VoltageChanged)
    Q_PROPERTY(float limitMaxSensor2Voltage READ limitMaxSensor2Voltage WRITE setLimitMaxSensor2Voltage NOTIFY limitMaxSensor2VoltageChanged)
    Q_PROPERTY(float limitMinCellVoltage READ limitMinCellVoltage WRITE setLimitMinCellVoltage NOTIFY limitMinCellVoltageChanged)
    Q_PROPERTY(float limitMaxCurrent READ limitMaxCurrent WRITE setLimitMaxCurrent NOTIFY limitMaxCurrentChanged)
    Q_PROPERTY(float limitMaxUsedCapacity READ limitMaxUsedCapacity WRITE setLimitMaxUsedCapacity NOTIFY limitMaxUsedCapacityChanged)
    Q_PROPERTY(float limitMinSensor1Temp READ limitMinSensor1Temp WRITE setLimitMinSensor1Temp NOTIFY limitMinSensor1TempChanged)
    Q_PROPERTY(float limitMaxSensor1Temp READ limitMaxSensor1Temp WRITE setLimitMaxSensor1Temp NOTIFY limitMaxSensor1TempChanged)
    Q_PROPERTY(float limitMinSensor2Temp READ limitMinSensor2Temp WRITE setLimitMinSensor2Temp NOTIFY limitMinSensor2TempChanged)
    Q_PROPERTY(float limitMaxSensor2Temp READ limitMaxSensor2Temp WRITE setLimitMaxSensor2Temp NOTIFY limitMaxSensor2TempChanged)
    Q_PROPERTY(float limitMaxServoTemp READ limitMaxServoTemp WRITE setLimitMaxServoTemp NOTIFY limitMaxServoTempChanged)
    Q_PROPERTY(float limitMinRPM READ limitMinRPM WRITE setLimitMinRPM NOTIFY limitMinRPMChanged)
    Q_PROPERTY(float limitMaxRPM READ limitMaxRPM WRITE setLimitMaxRPM NOTIFY limitMaxRPMChanged)
    Q_PROPERTY(float limitMinFuel READ limitMinFuel WRITE setLimitMinFuel NOTIFY limitMinFuelChanged)
    Q_PROPERTY(float limitMaxServoDifference READ limitMaxServoDifference WRITE setLimitMaxServoDifference NOTIFY limitMaxServoDifferenceChanged)
    Q_PROPERTY(HoTTBridgeSettings_Sensor::Enum sensorVARIO READ sensorVARIO WRITE setSensorVARIO NOTIFY sensorVARIOChanged)
    Q_PROPERTY(HoTTBridgeSettings_Sensor::Enum sensorGPS READ sensorGPS WRITE setSensorGPS NOTIFY sensorGPSChanged)
    Q_PROPERTY(HoTTBridgeSettings_Sensor::Enum sensorEAM READ sensorEAM WRITE setSensorEAM NOTIFY sensorEAMChanged)
    Q_PROPERTY(HoTTBridgeSettings_Sensor::Enum sensorGAM READ sensorGAM WRITE setSensorGAM NOTIFY sensorGAMChanged)
    Q_PROPERTY(HoTTBridgeSettings_Sensor::Enum sensorESC READ sensorESC WRITE setSensorESC NOTIFY sensorESCChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningAltitudeBeep READ warningAltitudeBeep WRITE setWarningAltitudeBeep NOTIFY warningAltitudeBeepChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMinSpeed READ warningMinSpeed WRITE setWarningMinSpeed NOTIFY warningMinSpeedChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMaxSpeed READ warningMaxSpeed WRITE setWarningMaxSpeed NOTIFY warningMaxSpeedChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningNegDifference1 READ warningNegDifference1 WRITE setWarningNegDifference1 NOTIFY warningNegDifference1Changed)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningPosDifference1 READ warningPosDifference1 WRITE setWarningPosDifference1 NOTIFY warningPosDifference1Changed)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningNegDifference2 READ warningNegDifference2 WRITE setWarningNegDifference2 NOTIFY warningNegDifference2Changed)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningPosDifference2 READ warningPosDifference2 WRITE setWarningPosDifference2 NOTIFY warningPosDifference2Changed)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMinHeight READ warningMinHeight WRITE setWarningMinHeight NOTIFY warningMinHeightChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMaxHeight READ warningMaxHeight WRITE setWarningMaxHeight NOTIFY warningMaxHeightChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMaxDistance READ warningMaxDistance WRITE setWarningMaxDistance NOTIFY warningMaxDistanceChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMinPowerVoltage READ warningMinPowerVoltage WRITE setWarningMinPowerVoltage NOTIFY warningMinPowerVoltageChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMaxPowerVoltage READ warningMaxPowerVoltage WRITE setWarningMaxPowerVoltage NOTIFY warningMaxPowerVoltageChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMinSensor1Voltage READ warningMinSensor1Voltage WRITE setWarningMinSensor1Voltage NOTIFY warningMinSensor1VoltageChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMaxSensor1Voltage READ warningMaxSensor1Voltage WRITE setWarningMaxSensor1Voltage NOTIFY warningMaxSensor1VoltageChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMinSensor2Voltage READ warningMinSensor2Voltage WRITE setWarningMinSensor2Voltage NOTIFY warningMinSensor2VoltageChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMaxSensor2Voltage READ warningMaxSensor2Voltage WRITE setWarningMaxSensor2Voltage NOTIFY warningMaxSensor2VoltageChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMinCellVoltage READ warningMinCellVoltage WRITE setWarningMinCellVoltage NOTIFY warningMinCellVoltageChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMaxCurrent READ warningMaxCurrent WRITE setWarningMaxCurrent NOTIFY warningMaxCurrentChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMaxUsedCapacity READ warningMaxUsedCapacity WRITE setWarningMaxUsedCapacity NOTIFY warningMaxUsedCapacityChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMinSensor1Temp READ warningMinSensor1Temp WRITE setWarningMinSensor1Temp NOTIFY warningMinSensor1TempChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMaxSensor1Temp READ warningMaxSensor1Temp WRITE setWarningMaxSensor1Temp NOTIFY warningMaxSensor1TempChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMinSensor2Temp READ warningMinSensor2Temp WRITE setWarningMinSensor2Temp NOTIFY warningMinSensor2TempChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMaxSensor2Temp READ warningMaxSensor2Temp WRITE setWarningMaxSensor2Temp NOTIFY warningMaxSensor2TempChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMaxServoTemp READ warningMaxServoTemp WRITE setWarningMaxServoTemp NOTIFY warningMaxServoTempChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMinRPM READ warningMinRPM WRITE setWarningMinRPM NOTIFY warningMinRPMChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMaxRPM READ warningMaxRPM WRITE setWarningMaxRPM NOTIFY warningMaxRPMChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMinFuel READ warningMinFuel WRITE setWarningMinFuel NOTIFY warningMinFuelChanged)
    Q_PROPERTY(HoTTBridgeSettings_Warning::Enum warningMaxServoDifference READ warningMaxServoDifference WRITE setWarningMaxServoDifference NOTIFY warningMaxServoDifferenceChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MinSpeed READ getLimit_MinSpeed WRITE setLimit_MinSpeed NOTIFY Limit_MinSpeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MaxSpeed READ getLimit_MaxSpeed WRITE setLimit_MaxSpeed NOTIFY Limit_MaxSpeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_NegDifference1 READ getLimit_NegDifference1 WRITE setLimit_NegDifference1 NOTIFY Limit_NegDifference1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_PosDifference1 READ getLimit_PosDifference1 WRITE setLimit_PosDifference1 NOTIFY Limit_PosDifference1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_NegDifference2 READ getLimit_NegDifference2 WRITE setLimit_NegDifference2 NOTIFY Limit_NegDifference2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_PosDifference2 READ getLimit_PosDifference2 WRITE setLimit_PosDifference2 NOTIFY Limit_PosDifference2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MinHeight READ getLimit_MinHeight WRITE setLimit_MinHeight NOTIFY Limit_MinHeightChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MaxHeight READ getLimit_MaxHeight WRITE setLimit_MaxHeight NOTIFY Limit_MaxHeightChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MaxDistance READ getLimit_MaxDistance WRITE setLimit_MaxDistance NOTIFY Limit_MaxDistanceChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MinPowerVoltage READ getLimit_MinPowerVoltage WRITE setLimit_MinPowerVoltage NOTIFY Limit_MinPowerVoltageChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MaxPowerVoltage READ getLimit_MaxPowerVoltage WRITE setLimit_MaxPowerVoltage NOTIFY Limit_MaxPowerVoltageChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MinSensor1Voltage READ getLimit_MinSensor1Voltage WRITE setLimit_MinSensor1Voltage NOTIFY Limit_MinSensor1VoltageChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MaxSensor1Voltage READ getLimit_MaxSensor1Voltage WRITE setLimit_MaxSensor1Voltage NOTIFY Limit_MaxSensor1VoltageChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MinSensor2Voltage READ getLimit_MinSensor2Voltage WRITE setLimit_MinSensor2Voltage NOTIFY Limit_MinSensor2VoltageChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MaxSensor2Voltage READ getLimit_MaxSensor2Voltage WRITE setLimit_MaxSensor2Voltage NOTIFY Limit_MaxSensor2VoltageChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MinCellVoltage READ getLimit_MinCellVoltage WRITE setLimit_MinCellVoltage NOTIFY Limit_MinCellVoltageChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MaxCurrent READ getLimit_MaxCurrent WRITE setLimit_MaxCurrent NOTIFY Limit_MaxCurrentChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MaxUsedCapacity READ getLimit_MaxUsedCapacity WRITE setLimit_MaxUsedCapacity NOTIFY Limit_MaxUsedCapacityChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MinSensor1Temp READ getLimit_MinSensor1Temp WRITE setLimit_MinSensor1Temp NOTIFY Limit_MinSensor1TempChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MaxSensor1Temp READ getLimit_MaxSensor1Temp WRITE setLimit_MaxSensor1Temp NOTIFY Limit_MaxSensor1TempChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MinSensor2Temp READ getLimit_MinSensor2Temp WRITE setLimit_MinSensor2Temp NOTIFY Limit_MinSensor2TempChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MaxSensor2Temp READ getLimit_MaxSensor2Temp WRITE setLimit_MaxSensor2Temp NOTIFY Limit_MaxSensor2TempChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MaxServoTemp READ getLimit_MaxServoTemp WRITE setLimit_MaxServoTemp NOTIFY Limit_MaxServoTempChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MinRPM READ getLimit_MinRPM WRITE setLimit_MinRPM NOTIFY Limit_MinRPMChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MaxRPM READ getLimit_MaxRPM WRITE setLimit_MaxRPM NOTIFY Limit_MaxRPMChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MinFuel READ getLimit_MinFuel WRITE setLimit_MinFuel NOTIFY Limit_MinFuelChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Limit_MaxServoDifference READ getLimit_MaxServoDifference WRITE setLimit_MaxServoDifference NOTIFY Limit_MaxServoDifferenceChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Sensor_VARIO READ getSensor_VARIO WRITE setSensor_VARIO NOTIFY Sensor_VARIOChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Sensor_GPS READ getSensor_GPS WRITE setSensor_GPS NOTIFY Sensor_GPSChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Sensor_EAM READ getSensor_EAM WRITE setSensor_EAM NOTIFY Sensor_EAMChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Sensor_GAM READ getSensor_GAM WRITE setSensor_GAM NOTIFY Sensor_GAMChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Sensor_ESC READ getSensor_ESC WRITE setSensor_ESC NOTIFY Sensor_ESCChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_AltitudeBeep READ getWarning_AltitudeBeep WRITE setWarning_AltitudeBeep NOTIFY Warning_AltitudeBeepChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MinSpeed READ getWarning_MinSpeed WRITE setWarning_MinSpeed NOTIFY Warning_MinSpeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MaxSpeed READ getWarning_MaxSpeed WRITE setWarning_MaxSpeed NOTIFY Warning_MaxSpeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_NegDifference1 READ getWarning_NegDifference1 WRITE setWarning_NegDifference1 NOTIFY Warning_NegDifference1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_PosDifference1 READ getWarning_PosDifference1 WRITE setWarning_PosDifference1 NOTIFY Warning_PosDifference1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_NegDifference2 READ getWarning_NegDifference2 WRITE setWarning_NegDifference2 NOTIFY Warning_NegDifference2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_PosDifference2 READ getWarning_PosDifference2 WRITE setWarning_PosDifference2 NOTIFY Warning_PosDifference2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MinHeight READ getWarning_MinHeight WRITE setWarning_MinHeight NOTIFY Warning_MinHeightChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MaxHeight READ getWarning_MaxHeight WRITE setWarning_MaxHeight NOTIFY Warning_MaxHeightChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MaxDistance READ getWarning_MaxDistance WRITE setWarning_MaxDistance NOTIFY Warning_MaxDistanceChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MinPowerVoltage READ getWarning_MinPowerVoltage WRITE setWarning_MinPowerVoltage NOTIFY Warning_MinPowerVoltageChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MaxPowerVoltage READ getWarning_MaxPowerVoltage WRITE setWarning_MaxPowerVoltage NOTIFY Warning_MaxPowerVoltageChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MinSensor1Voltage READ getWarning_MinSensor1Voltage WRITE setWarning_MinSensor1Voltage NOTIFY Warning_MinSensor1VoltageChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MaxSensor1Voltage READ getWarning_MaxSensor1Voltage WRITE setWarning_MaxSensor1Voltage NOTIFY Warning_MaxSensor1VoltageChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MinSensor2Voltage READ getWarning_MinSensor2Voltage WRITE setWarning_MinSensor2Voltage NOTIFY Warning_MinSensor2VoltageChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MaxSensor2Voltage READ getWarning_MaxSensor2Voltage WRITE setWarning_MaxSensor2Voltage NOTIFY Warning_MaxSensor2VoltageChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MinCellVoltage READ getWarning_MinCellVoltage WRITE setWarning_MinCellVoltage NOTIFY Warning_MinCellVoltageChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MaxCurrent READ getWarning_MaxCurrent WRITE setWarning_MaxCurrent NOTIFY Warning_MaxCurrentChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MaxUsedCapacity READ getWarning_MaxUsedCapacity WRITE setWarning_MaxUsedCapacity NOTIFY Warning_MaxUsedCapacityChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MinSensor1Temp READ getWarning_MinSensor1Temp WRITE setWarning_MinSensor1Temp NOTIFY Warning_MinSensor1TempChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MaxSensor1Temp READ getWarning_MaxSensor1Temp WRITE setWarning_MaxSensor1Temp NOTIFY Warning_MaxSensor1TempChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MinSensor2Temp READ getWarning_MinSensor2Temp WRITE setWarning_MinSensor2Temp NOTIFY Warning_MinSensor2TempChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MaxSensor2Temp READ getWarning_MaxSensor2Temp WRITE setWarning_MaxSensor2Temp NOTIFY Warning_MaxSensor2TempChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MaxServoTemp READ getWarning_MaxServoTemp WRITE setWarning_MaxServoTemp NOTIFY Warning_MaxServoTempChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MinRPM READ getWarning_MinRPM WRITE setWarning_MinRPM NOTIFY Warning_MinRPMChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MaxRPM READ getWarning_MaxRPM WRITE setWarning_MaxRPM NOTIFY Warning_MaxRPMChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MinFuel READ getWarning_MinFuel WRITE setWarning_MinFuel NOTIFY Warning_MinFuelChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Warning_MaxServoDifference READ getWarning_MaxServoDifference WRITE setWarning_MaxServoDifference NOTIFY Warning_MaxServoDifferenceChanged);


public:
    // Field structure
    typedef struct {
        float Limit[27];
        quint8 Sensor[5];
        quint8 Warning[28];

    } __attribute__((packed)) DataFields;

    // Field information
    // Limit
    typedef enum { LIMIT_MINSPEED=0, LIMIT_MAXSPEED=1, LIMIT_NEGDIFFERENCE1=2, LIMIT_POSDIFFERENCE1=3, LIMIT_NEGDIFFERENCE2=4, LIMIT_POSDIFFERENCE2=5, LIMIT_MINHEIGHT=6, LIMIT_MAXHEIGHT=7, LIMIT_MAXDISTANCE=8, LIMIT_MINPOWERVOLTAGE=9, LIMIT_MAXPOWERVOLTAGE=10, LIMIT_MINSENSOR1VOLTAGE=11, LIMIT_MAXSENSOR1VOLTAGE=12, LIMIT_MINSENSOR2VOLTAGE=13, LIMIT_MAXSENSOR2VOLTAGE=14, LIMIT_MINCELLVOLTAGE=15, LIMIT_MAXCURRENT=16, LIMIT_MAXUSEDCAPACITY=17, LIMIT_MINSENSOR1TEMP=18, LIMIT_MAXSENSOR1TEMP=19, LIMIT_MINSENSOR2TEMP=20, LIMIT_MAXSENSOR2TEMP=21, LIMIT_MAXSERVOTEMP=22, LIMIT_MINRPM=23, LIMIT_MAXRPM=24, LIMIT_MINFUEL=25, LIMIT_MAXSERVODIFFERENCE=26 } LimitElem;
    static const quint32 LIMIT_NUMELEM = 27;
    // Sensor
    typedef enum { SENSOR_DISABLED=0, SENSOR_ENABLED=1 } SensorOptions;
    typedef enum { SENSOR_VARIO=0, SENSOR_GPS=1, SENSOR_EAM=2, SENSOR_GAM=3, SENSOR_ESC=4 } SensorElem;
    static const quint32 SENSOR_NUMELEM = 5;
    // Warning
    typedef enum { WARNING_DISABLED=0, WARNING_ENABLED=1 } WarningOptions;
    typedef enum { WARNING_ALTITUDEBEEP=0, WARNING_MINSPEED=1, WARNING_MAXSPEED=2, WARNING_NEGDIFFERENCE1=3, WARNING_POSDIFFERENCE1=4, WARNING_NEGDIFFERENCE2=5, WARNING_POSDIFFERENCE2=6, WARNING_MINHEIGHT=7, WARNING_MAXHEIGHT=8, WARNING_MAXDISTANCE=9, WARNING_MINPOWERVOLTAGE=10, WARNING_MAXPOWERVOLTAGE=11, WARNING_MINSENSOR1VOLTAGE=12, WARNING_MAXSENSOR1VOLTAGE=13, WARNING_MINSENSOR2VOLTAGE=14, WARNING_MAXSENSOR2VOLTAGE=15, WARNING_MINCELLVOLTAGE=16, WARNING_MAXCURRENT=17, WARNING_MAXUSEDCAPACITY=18, WARNING_MINSENSOR1TEMP=19, WARNING_MAXSENSOR1TEMP=20, WARNING_MINSENSOR2TEMP=21, WARNING_MAXSENSOR2TEMP=22, WARNING_MAXSERVOTEMP=23, WARNING_MINRPM=24, WARNING_MAXRPM=25, WARNING_MINFUEL=26, WARNING_MAXSERVODIFFERENCE=27 } WarningElem;
    static const quint32 WARNING_NUMELEM = 28;


    // Constants
    static const quint32 OBJID = 0xE1F7BD4A;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    HoTTBridgeSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static HoTTBridgeSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE float limit(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit(quint32 index) const { return static_cast<float>(limit(index)); }
    float limitMinSpeed() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MinSpeed() const { return static_cast<float>(limitMinSpeed()); }
    float limitMaxSpeed() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MaxSpeed() const { return static_cast<float>(limitMaxSpeed()); }
    float limitNegDifference1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_NegDifference1() const { return static_cast<float>(limitNegDifference1()); }
    float limitPosDifference1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_PosDifference1() const { return static_cast<float>(limitPosDifference1()); }
    float limitNegDifference2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_NegDifference2() const { return static_cast<float>(limitNegDifference2()); }
    float limitPosDifference2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_PosDifference2() const { return static_cast<float>(limitPosDifference2()); }
    float limitMinHeight() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MinHeight() const { return static_cast<float>(limitMinHeight()); }
    float limitMaxHeight() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MaxHeight() const { return static_cast<float>(limitMaxHeight()); }
    float limitMaxDistance() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MaxDistance() const { return static_cast<float>(limitMaxDistance()); }
    float limitMinPowerVoltage() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MinPowerVoltage() const { return static_cast<float>(limitMinPowerVoltage()); }
    float limitMaxPowerVoltage() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MaxPowerVoltage() const { return static_cast<float>(limitMaxPowerVoltage()); }
    float limitMinSensor1Voltage() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MinSensor1Voltage() const { return static_cast<float>(limitMinSensor1Voltage()); }
    float limitMaxSensor1Voltage() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MaxSensor1Voltage() const { return static_cast<float>(limitMaxSensor1Voltage()); }
    float limitMinSensor2Voltage() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MinSensor2Voltage() const { return static_cast<float>(limitMinSensor2Voltage()); }
    float limitMaxSensor2Voltage() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MaxSensor2Voltage() const { return static_cast<float>(limitMaxSensor2Voltage()); }
    float limitMinCellVoltage() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MinCellVoltage() const { return static_cast<float>(limitMinCellVoltage()); }
    float limitMaxCurrent() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MaxCurrent() const { return static_cast<float>(limitMaxCurrent()); }
    float limitMaxUsedCapacity() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MaxUsedCapacity() const { return static_cast<float>(limitMaxUsedCapacity()); }
    float limitMinSensor1Temp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MinSensor1Temp() const { return static_cast<float>(limitMinSensor1Temp()); }
    float limitMaxSensor1Temp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MaxSensor1Temp() const { return static_cast<float>(limitMaxSensor1Temp()); }
    float limitMinSensor2Temp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MinSensor2Temp() const { return static_cast<float>(limitMinSensor2Temp()); }
    float limitMaxSensor2Temp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MaxSensor2Temp() const { return static_cast<float>(limitMaxSensor2Temp()); }
    float limitMaxServoTemp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MaxServoTemp() const { return static_cast<float>(limitMaxServoTemp()); }
    float limitMinRPM() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MinRPM() const { return static_cast<float>(limitMinRPM()); }
    float limitMaxRPM() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MaxRPM() const { return static_cast<float>(limitMaxRPM()); }
    float limitMinFuel() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MinFuel() const { return static_cast<float>(limitMinFuel()); }
    float limitMaxServoDifference() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLimit_MaxServoDifference() const { return static_cast<float>(limitMaxServoDifference()); }
    Q_INVOKABLE HoTTBridgeSettings_Sensor::Enum sensor(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getSensor(quint32 index) const { return static_cast<quint8>(sensor(index)); }
    HoTTBridgeSettings_Sensor::Enum sensorVARIO() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getSensor_VARIO() const { return static_cast<quint8>(sensorVARIO()); }
    HoTTBridgeSettings_Sensor::Enum sensorGPS() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getSensor_GPS() const { return static_cast<quint8>(sensorGPS()); }
    HoTTBridgeSettings_Sensor::Enum sensorEAM() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getSensor_EAM() const { return static_cast<quint8>(sensorEAM()); }
    HoTTBridgeSettings_Sensor::Enum sensorGAM() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getSensor_GAM() const { return static_cast<quint8>(sensorGAM()); }
    HoTTBridgeSettings_Sensor::Enum sensorESC() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getSensor_ESC() const { return static_cast<quint8>(sensorESC()); }
    Q_INVOKABLE HoTTBridgeSettings_Warning::Enum warning(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning(quint32 index) const { return static_cast<quint8>(warning(index)); }
    HoTTBridgeSettings_Warning::Enum warningAltitudeBeep() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_AltitudeBeep() const { return static_cast<quint8>(warningAltitudeBeep()); }
    HoTTBridgeSettings_Warning::Enum warningMinSpeed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MinSpeed() const { return static_cast<quint8>(warningMinSpeed()); }
    HoTTBridgeSettings_Warning::Enum warningMaxSpeed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MaxSpeed() const { return static_cast<quint8>(warningMaxSpeed()); }
    HoTTBridgeSettings_Warning::Enum warningNegDifference1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_NegDifference1() const { return static_cast<quint8>(warningNegDifference1()); }
    HoTTBridgeSettings_Warning::Enum warningPosDifference1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_PosDifference1() const { return static_cast<quint8>(warningPosDifference1()); }
    HoTTBridgeSettings_Warning::Enum warningNegDifference2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_NegDifference2() const { return static_cast<quint8>(warningNegDifference2()); }
    HoTTBridgeSettings_Warning::Enum warningPosDifference2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_PosDifference2() const { return static_cast<quint8>(warningPosDifference2()); }
    HoTTBridgeSettings_Warning::Enum warningMinHeight() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MinHeight() const { return static_cast<quint8>(warningMinHeight()); }
    HoTTBridgeSettings_Warning::Enum warningMaxHeight() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MaxHeight() const { return static_cast<quint8>(warningMaxHeight()); }
    HoTTBridgeSettings_Warning::Enum warningMaxDistance() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MaxDistance() const { return static_cast<quint8>(warningMaxDistance()); }
    HoTTBridgeSettings_Warning::Enum warningMinPowerVoltage() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MinPowerVoltage() const { return static_cast<quint8>(warningMinPowerVoltage()); }
    HoTTBridgeSettings_Warning::Enum warningMaxPowerVoltage() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MaxPowerVoltage() const { return static_cast<quint8>(warningMaxPowerVoltage()); }
    HoTTBridgeSettings_Warning::Enum warningMinSensor1Voltage() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MinSensor1Voltage() const { return static_cast<quint8>(warningMinSensor1Voltage()); }
    HoTTBridgeSettings_Warning::Enum warningMaxSensor1Voltage() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MaxSensor1Voltage() const { return static_cast<quint8>(warningMaxSensor1Voltage()); }
    HoTTBridgeSettings_Warning::Enum warningMinSensor2Voltage() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MinSensor2Voltage() const { return static_cast<quint8>(warningMinSensor2Voltage()); }
    HoTTBridgeSettings_Warning::Enum warningMaxSensor2Voltage() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MaxSensor2Voltage() const { return static_cast<quint8>(warningMaxSensor2Voltage()); }
    HoTTBridgeSettings_Warning::Enum warningMinCellVoltage() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MinCellVoltage() const { return static_cast<quint8>(warningMinCellVoltage()); }
    HoTTBridgeSettings_Warning::Enum warningMaxCurrent() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MaxCurrent() const { return static_cast<quint8>(warningMaxCurrent()); }
    HoTTBridgeSettings_Warning::Enum warningMaxUsedCapacity() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MaxUsedCapacity() const { return static_cast<quint8>(warningMaxUsedCapacity()); }
    HoTTBridgeSettings_Warning::Enum warningMinSensor1Temp() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MinSensor1Temp() const { return static_cast<quint8>(warningMinSensor1Temp()); }
    HoTTBridgeSettings_Warning::Enum warningMaxSensor1Temp() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MaxSensor1Temp() const { return static_cast<quint8>(warningMaxSensor1Temp()); }
    HoTTBridgeSettings_Warning::Enum warningMinSensor2Temp() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MinSensor2Temp() const { return static_cast<quint8>(warningMinSensor2Temp()); }
    HoTTBridgeSettings_Warning::Enum warningMaxSensor2Temp() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MaxSensor2Temp() const { return static_cast<quint8>(warningMaxSensor2Temp()); }
    HoTTBridgeSettings_Warning::Enum warningMaxServoTemp() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MaxServoTemp() const { return static_cast<quint8>(warningMaxServoTemp()); }
    HoTTBridgeSettings_Warning::Enum warningMinRPM() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MinRPM() const { return static_cast<quint8>(warningMinRPM()); }
    HoTTBridgeSettings_Warning::Enum warningMaxRPM() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MaxRPM() const { return static_cast<quint8>(warningMaxRPM()); }
    HoTTBridgeSettings_Warning::Enum warningMinFuel() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MinFuel() const { return static_cast<quint8>(warningMinFuel()); }
    HoTTBridgeSettings_Warning::Enum warningMaxServoDifference() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWarning_MaxServoDifference() const { return static_cast<quint8>(warningMaxServoDifference()); }


public slots:
    Q_INVOKABLE void setLimit(quint32 index, const float value);
    void setLimitMinSpeed(const float value);
    /*DEPRECATED*/ void setLimit_MinSpeed(float value) { setLimitMinSpeed(static_cast<float>(value)); }
    void setLimitMaxSpeed(const float value);
    /*DEPRECATED*/ void setLimit_MaxSpeed(float value) { setLimitMaxSpeed(static_cast<float>(value)); }
    void setLimitNegDifference1(const float value);
    /*DEPRECATED*/ void setLimit_NegDifference1(float value) { setLimitNegDifference1(static_cast<float>(value)); }
    void setLimitPosDifference1(const float value);
    /*DEPRECATED*/ void setLimit_PosDifference1(float value) { setLimitPosDifference1(static_cast<float>(value)); }
    void setLimitNegDifference2(const float value);
    /*DEPRECATED*/ void setLimit_NegDifference2(float value) { setLimitNegDifference2(static_cast<float>(value)); }
    void setLimitPosDifference2(const float value);
    /*DEPRECATED*/ void setLimit_PosDifference2(float value) { setLimitPosDifference2(static_cast<float>(value)); }
    void setLimitMinHeight(const float value);
    /*DEPRECATED*/ void setLimit_MinHeight(float value) { setLimitMinHeight(static_cast<float>(value)); }
    void setLimitMaxHeight(const float value);
    /*DEPRECATED*/ void setLimit_MaxHeight(float value) { setLimitMaxHeight(static_cast<float>(value)); }
    void setLimitMaxDistance(const float value);
    /*DEPRECATED*/ void setLimit_MaxDistance(float value) { setLimitMaxDistance(static_cast<float>(value)); }
    void setLimitMinPowerVoltage(const float value);
    /*DEPRECATED*/ void setLimit_MinPowerVoltage(float value) { setLimitMinPowerVoltage(static_cast<float>(value)); }
    void setLimitMaxPowerVoltage(const float value);
    /*DEPRECATED*/ void setLimit_MaxPowerVoltage(float value) { setLimitMaxPowerVoltage(static_cast<float>(value)); }
    void setLimitMinSensor1Voltage(const float value);
    /*DEPRECATED*/ void setLimit_MinSensor1Voltage(float value) { setLimitMinSensor1Voltage(static_cast<float>(value)); }
    void setLimitMaxSensor1Voltage(const float value);
    /*DEPRECATED*/ void setLimit_MaxSensor1Voltage(float value) { setLimitMaxSensor1Voltage(static_cast<float>(value)); }
    void setLimitMinSensor2Voltage(const float value);
    /*DEPRECATED*/ void setLimit_MinSensor2Voltage(float value) { setLimitMinSensor2Voltage(static_cast<float>(value)); }
    void setLimitMaxSensor2Voltage(const float value);
    /*DEPRECATED*/ void setLimit_MaxSensor2Voltage(float value) { setLimitMaxSensor2Voltage(static_cast<float>(value)); }
    void setLimitMinCellVoltage(const float value);
    /*DEPRECATED*/ void setLimit_MinCellVoltage(float value) { setLimitMinCellVoltage(static_cast<float>(value)); }
    void setLimitMaxCurrent(const float value);
    /*DEPRECATED*/ void setLimit_MaxCurrent(float value) { setLimitMaxCurrent(static_cast<float>(value)); }
    void setLimitMaxUsedCapacity(const float value);
    /*DEPRECATED*/ void setLimit_MaxUsedCapacity(float value) { setLimitMaxUsedCapacity(static_cast<float>(value)); }
    void setLimitMinSensor1Temp(const float value);
    /*DEPRECATED*/ void setLimit_MinSensor1Temp(float value) { setLimitMinSensor1Temp(static_cast<float>(value)); }
    void setLimitMaxSensor1Temp(const float value);
    /*DEPRECATED*/ void setLimit_MaxSensor1Temp(float value) { setLimitMaxSensor1Temp(static_cast<float>(value)); }
    void setLimitMinSensor2Temp(const float value);
    /*DEPRECATED*/ void setLimit_MinSensor2Temp(float value) { setLimitMinSensor2Temp(static_cast<float>(value)); }
    void setLimitMaxSensor2Temp(const float value);
    /*DEPRECATED*/ void setLimit_MaxSensor2Temp(float value) { setLimitMaxSensor2Temp(static_cast<float>(value)); }
    void setLimitMaxServoTemp(const float value);
    /*DEPRECATED*/ void setLimit_MaxServoTemp(float value) { setLimitMaxServoTemp(static_cast<float>(value)); }
    void setLimitMinRPM(const float value);
    /*DEPRECATED*/ void setLimit_MinRPM(float value) { setLimitMinRPM(static_cast<float>(value)); }
    void setLimitMaxRPM(const float value);
    /*DEPRECATED*/ void setLimit_MaxRPM(float value) { setLimitMaxRPM(static_cast<float>(value)); }
    void setLimitMinFuel(const float value);
    /*DEPRECATED*/ void setLimit_MinFuel(float value) { setLimitMinFuel(static_cast<float>(value)); }
    void setLimitMaxServoDifference(const float value);
    /*DEPRECATED*/ void setLimit_MaxServoDifference(float value) { setLimitMaxServoDifference(static_cast<float>(value)); }
    Q_INVOKABLE void setSensor(quint32 index, const HoTTBridgeSettings_Sensor::Enum value);
    /*DEPRECATED*/ void setSensor(quint32 index, quint8 value) { setSensor(index, static_cast<HoTTBridgeSettings_Sensor::Enum>(value)); }
    void setSensorVARIO(const HoTTBridgeSettings_Sensor::Enum value);
    /*DEPRECATED*/ void setSensor_VARIO(quint8 value) { setSensorVARIO(static_cast<HoTTBridgeSettings_Sensor::Enum>(value)); }
    void setSensorGPS(const HoTTBridgeSettings_Sensor::Enum value);
    /*DEPRECATED*/ void setSensor_GPS(quint8 value) { setSensorGPS(static_cast<HoTTBridgeSettings_Sensor::Enum>(value)); }
    void setSensorEAM(const HoTTBridgeSettings_Sensor::Enum value);
    /*DEPRECATED*/ void setSensor_EAM(quint8 value) { setSensorEAM(static_cast<HoTTBridgeSettings_Sensor::Enum>(value)); }
    void setSensorGAM(const HoTTBridgeSettings_Sensor::Enum value);
    /*DEPRECATED*/ void setSensor_GAM(quint8 value) { setSensorGAM(static_cast<HoTTBridgeSettings_Sensor::Enum>(value)); }
    void setSensorESC(const HoTTBridgeSettings_Sensor::Enum value);
    /*DEPRECATED*/ void setSensor_ESC(quint8 value) { setSensorESC(static_cast<HoTTBridgeSettings_Sensor::Enum>(value)); }
    Q_INVOKABLE void setWarning(quint32 index, const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning(quint32 index, quint8 value) { setWarning(index, static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningAltitudeBeep(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_AltitudeBeep(quint8 value) { setWarningAltitudeBeep(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMinSpeed(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MinSpeed(quint8 value) { setWarningMinSpeed(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMaxSpeed(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MaxSpeed(quint8 value) { setWarningMaxSpeed(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningNegDifference1(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_NegDifference1(quint8 value) { setWarningNegDifference1(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningPosDifference1(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_PosDifference1(quint8 value) { setWarningPosDifference1(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningNegDifference2(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_NegDifference2(quint8 value) { setWarningNegDifference2(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningPosDifference2(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_PosDifference2(quint8 value) { setWarningPosDifference2(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMinHeight(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MinHeight(quint8 value) { setWarningMinHeight(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMaxHeight(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MaxHeight(quint8 value) { setWarningMaxHeight(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMaxDistance(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MaxDistance(quint8 value) { setWarningMaxDistance(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMinPowerVoltage(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MinPowerVoltage(quint8 value) { setWarningMinPowerVoltage(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMaxPowerVoltage(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MaxPowerVoltage(quint8 value) { setWarningMaxPowerVoltage(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMinSensor1Voltage(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MinSensor1Voltage(quint8 value) { setWarningMinSensor1Voltage(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMaxSensor1Voltage(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MaxSensor1Voltage(quint8 value) { setWarningMaxSensor1Voltage(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMinSensor2Voltage(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MinSensor2Voltage(quint8 value) { setWarningMinSensor2Voltage(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMaxSensor2Voltage(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MaxSensor2Voltage(quint8 value) { setWarningMaxSensor2Voltage(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMinCellVoltage(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MinCellVoltage(quint8 value) { setWarningMinCellVoltage(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMaxCurrent(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MaxCurrent(quint8 value) { setWarningMaxCurrent(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMaxUsedCapacity(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MaxUsedCapacity(quint8 value) { setWarningMaxUsedCapacity(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMinSensor1Temp(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MinSensor1Temp(quint8 value) { setWarningMinSensor1Temp(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMaxSensor1Temp(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MaxSensor1Temp(quint8 value) { setWarningMaxSensor1Temp(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMinSensor2Temp(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MinSensor2Temp(quint8 value) { setWarningMinSensor2Temp(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMaxSensor2Temp(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MaxSensor2Temp(quint8 value) { setWarningMaxSensor2Temp(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMaxServoTemp(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MaxServoTemp(quint8 value) { setWarningMaxServoTemp(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMinRPM(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MinRPM(quint8 value) { setWarningMinRPM(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMaxRPM(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MaxRPM(quint8 value) { setWarningMaxRPM(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMinFuel(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MinFuel(quint8 value) { setWarningMinFuel(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }
    void setWarningMaxServoDifference(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void setWarning_MaxServoDifference(quint8 value) { setWarningMaxServoDifference(static_cast<HoTTBridgeSettings_Warning::Enum>(value)); }


signals:
    void limitChanged(quint32 index, const float value);
    /*DEPRECATED*/ void LimitChanged(quint32 index, float value);
    void limitMinSpeedChanged(const float value);
    /*DEPRECATED*/ void Limit_MinSpeedChanged(float value);
    void limitMaxSpeedChanged(const float value);
    /*DEPRECATED*/ void Limit_MaxSpeedChanged(float value);
    void limitNegDifference1Changed(const float value);
    /*DEPRECATED*/ void Limit_NegDifference1Changed(float value);
    void limitPosDifference1Changed(const float value);
    /*DEPRECATED*/ void Limit_PosDifference1Changed(float value);
    void limitNegDifference2Changed(const float value);
    /*DEPRECATED*/ void Limit_NegDifference2Changed(float value);
    void limitPosDifference2Changed(const float value);
    /*DEPRECATED*/ void Limit_PosDifference2Changed(float value);
    void limitMinHeightChanged(const float value);
    /*DEPRECATED*/ void Limit_MinHeightChanged(float value);
    void limitMaxHeightChanged(const float value);
    /*DEPRECATED*/ void Limit_MaxHeightChanged(float value);
    void limitMaxDistanceChanged(const float value);
    /*DEPRECATED*/ void Limit_MaxDistanceChanged(float value);
    void limitMinPowerVoltageChanged(const float value);
    /*DEPRECATED*/ void Limit_MinPowerVoltageChanged(float value);
    void limitMaxPowerVoltageChanged(const float value);
    /*DEPRECATED*/ void Limit_MaxPowerVoltageChanged(float value);
    void limitMinSensor1VoltageChanged(const float value);
    /*DEPRECATED*/ void Limit_MinSensor1VoltageChanged(float value);
    void limitMaxSensor1VoltageChanged(const float value);
    /*DEPRECATED*/ void Limit_MaxSensor1VoltageChanged(float value);
    void limitMinSensor2VoltageChanged(const float value);
    /*DEPRECATED*/ void Limit_MinSensor2VoltageChanged(float value);
    void limitMaxSensor2VoltageChanged(const float value);
    /*DEPRECATED*/ void Limit_MaxSensor2VoltageChanged(float value);
    void limitMinCellVoltageChanged(const float value);
    /*DEPRECATED*/ void Limit_MinCellVoltageChanged(float value);
    void limitMaxCurrentChanged(const float value);
    /*DEPRECATED*/ void Limit_MaxCurrentChanged(float value);
    void limitMaxUsedCapacityChanged(const float value);
    /*DEPRECATED*/ void Limit_MaxUsedCapacityChanged(float value);
    void limitMinSensor1TempChanged(const float value);
    /*DEPRECATED*/ void Limit_MinSensor1TempChanged(float value);
    void limitMaxSensor1TempChanged(const float value);
    /*DEPRECATED*/ void Limit_MaxSensor1TempChanged(float value);
    void limitMinSensor2TempChanged(const float value);
    /*DEPRECATED*/ void Limit_MinSensor2TempChanged(float value);
    void limitMaxSensor2TempChanged(const float value);
    /*DEPRECATED*/ void Limit_MaxSensor2TempChanged(float value);
    void limitMaxServoTempChanged(const float value);
    /*DEPRECATED*/ void Limit_MaxServoTempChanged(float value);
    void limitMinRPMChanged(const float value);
    /*DEPRECATED*/ void Limit_MinRPMChanged(float value);
    void limitMaxRPMChanged(const float value);
    /*DEPRECATED*/ void Limit_MaxRPMChanged(float value);
    void limitMinFuelChanged(const float value);
    /*DEPRECATED*/ void Limit_MinFuelChanged(float value);
    void limitMaxServoDifferenceChanged(const float value);
    /*DEPRECATED*/ void Limit_MaxServoDifferenceChanged(float value);
    void sensorChanged(quint32 index, const HoTTBridgeSettings_Sensor::Enum value);
    /*DEPRECATED*/ void SensorChanged(quint32 index, quint8 value);
    void sensorVARIOChanged(const HoTTBridgeSettings_Sensor::Enum value);
    /*DEPRECATED*/ void Sensor_VARIOChanged(quint8 value);
    void sensorGPSChanged(const HoTTBridgeSettings_Sensor::Enum value);
    /*DEPRECATED*/ void Sensor_GPSChanged(quint8 value);
    void sensorEAMChanged(const HoTTBridgeSettings_Sensor::Enum value);
    /*DEPRECATED*/ void Sensor_EAMChanged(quint8 value);
    void sensorGAMChanged(const HoTTBridgeSettings_Sensor::Enum value);
    /*DEPRECATED*/ void Sensor_GAMChanged(quint8 value);
    void sensorESCChanged(const HoTTBridgeSettings_Sensor::Enum value);
    /*DEPRECATED*/ void Sensor_ESCChanged(quint8 value);
    void warningChanged(quint32 index, const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void WarningChanged(quint32 index, quint8 value);
    void warningAltitudeBeepChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_AltitudeBeepChanged(quint8 value);
    void warningMinSpeedChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MinSpeedChanged(quint8 value);
    void warningMaxSpeedChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MaxSpeedChanged(quint8 value);
    void warningNegDifference1Changed(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_NegDifference1Changed(quint8 value);
    void warningPosDifference1Changed(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_PosDifference1Changed(quint8 value);
    void warningNegDifference2Changed(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_NegDifference2Changed(quint8 value);
    void warningPosDifference2Changed(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_PosDifference2Changed(quint8 value);
    void warningMinHeightChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MinHeightChanged(quint8 value);
    void warningMaxHeightChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MaxHeightChanged(quint8 value);
    void warningMaxDistanceChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MaxDistanceChanged(quint8 value);
    void warningMinPowerVoltageChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MinPowerVoltageChanged(quint8 value);
    void warningMaxPowerVoltageChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MaxPowerVoltageChanged(quint8 value);
    void warningMinSensor1VoltageChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MinSensor1VoltageChanged(quint8 value);
    void warningMaxSensor1VoltageChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MaxSensor1VoltageChanged(quint8 value);
    void warningMinSensor2VoltageChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MinSensor2VoltageChanged(quint8 value);
    void warningMaxSensor2VoltageChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MaxSensor2VoltageChanged(quint8 value);
    void warningMinCellVoltageChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MinCellVoltageChanged(quint8 value);
    void warningMaxCurrentChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MaxCurrentChanged(quint8 value);
    void warningMaxUsedCapacityChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MaxUsedCapacityChanged(quint8 value);
    void warningMinSensor1TempChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MinSensor1TempChanged(quint8 value);
    void warningMaxSensor1TempChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MaxSensor1TempChanged(quint8 value);
    void warningMinSensor2TempChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MinSensor2TempChanged(quint8 value);
    void warningMaxSensor2TempChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MaxSensor2TempChanged(quint8 value);
    void warningMaxServoTempChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MaxServoTempChanged(quint8 value);
    void warningMinRPMChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MinRPMChanged(quint8 value);
    void warningMaxRPMChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MaxRPMChanged(quint8 value);
    void warningMinFuelChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MinFuelChanged(quint8 value);
    void warningMaxServoDifferenceChanged(const HoTTBridgeSettings_Warning::Enum value);
    /*DEPRECATED*/ void Warning_MaxServoDifferenceChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // HOTTBRIDGESETTINGS_H

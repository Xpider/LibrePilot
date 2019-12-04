/**
 ******************************************************************************
 *
 * @file       hwdiscoveryf4baresettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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
#ifndef HWDISCOVERYF4BARESETTINGS_H
#define HWDISCOVERYF4BARESETTINGS_H

#include "uavdataobject.h"


class UAVObjectManager;

class HwDiscoveryF4BareSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT HwDiscoveryF4BareSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint16 boardRevision READ boardRevision WRITE setBoardRevision NOTIFY boardRevisionChanged)
    Q_PROPERTY(quint16 boardType READ boardType WRITE setBoardType NOTIFY boardTypeChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint16 BoardRevision READ getBoardRevision WRITE setBoardRevision NOTIFY BoardRevisionChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 BoardType READ getBoardType WRITE setBoardType NOTIFY BoardTypeChanged);


public:
    // Field structure
    typedef struct {
        quint16 BoardRevision;
        quint8 BoardType;

    } __attribute__((packed)) DataFields;

    // Field information
    // BoardRevision
    // BoardType


    // Constants
    static const quint32 OBJID = 0xA95D2DFE;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    HwDiscoveryF4BareSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static HwDiscoveryF4BareSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    quint16 boardRevision() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getBoardRevision() const { return static_cast<quint16>(boardRevision()); }
    quint16 boardType() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBoardType() const { return static_cast<quint8>(boardType()); }


public slots:
    void setBoardRevision(const quint16 value);
    void setBoardType(const quint16 value);
    /*DEPRECATED*/ void setBoardType(quint8 value) { setBoardType(static_cast<quint16>(value)); }


signals:
    void boardRevisionChanged(const quint16 value);
    /*DEPRECATED*/ void BoardRevisionChanged(quint16 value);
    void boardTypeChanged(const quint16 value);
    /*DEPRECATED*/ void BoardTypeChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // HWDISCOVERYF4BARESETTINGS_H

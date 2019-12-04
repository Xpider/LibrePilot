/**
 ******************************************************************************
 *
 * @file       hottbridgestatus.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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
#ifndef HOTTBRIDGESTATUS_H
#define HOTTBRIDGESTATUS_H

#include "uavdataobject.h"


class UAVObjectManager;

class HoTTBridgeStatusConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT HoTTBridgeStatus: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint32 txPackets READ txPackets WRITE setTxPackets NOTIFY txPacketsChanged)
    Q_PROPERTY(quint32 rxPackets READ rxPackets WRITE setRxPackets NOTIFY rxPacketsChanged)
    Q_PROPERTY(quint32 txFail READ txFail WRITE setTxFail NOTIFY txFailChanged)
    Q_PROPERTY(quint32 rxFail READ rxFail WRITE setRxFail NOTIFY rxFailChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint32 TxPackets READ getTxPackets WRITE setTxPackets NOTIFY TxPacketsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RxPackets READ getRxPackets WRITE setRxPackets NOTIFY RxPacketsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 TxFail READ getTxFail WRITE setTxFail NOTIFY TxFailChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RxFail READ getRxFail WRITE setRxFail NOTIFY RxFailChanged);


public:
    // Field structure
    typedef struct {
        quint32 TxPackets;
        quint32 RxPackets;
        quint32 TxFail;
        quint32 RxFail;

    } __attribute__((packed)) DataFields;

    // Field information
    // TxPackets
    // RxPackets
    // TxFail
    // RxFail


    // Constants
    static const quint32 OBJID = 0x860C5F84;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    HoTTBridgeStatus();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static HoTTBridgeStatus* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    quint32 txPackets() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getTxPackets() const { return static_cast<quint32>(txPackets()); }
    quint32 rxPackets() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRxPackets() const { return static_cast<quint32>(rxPackets()); }
    quint32 txFail() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getTxFail() const { return static_cast<quint32>(txFail()); }
    quint32 rxFail() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRxFail() const { return static_cast<quint32>(rxFail()); }


public slots:
    void setTxPackets(const quint32 value);
    void setRxPackets(const quint32 value);
    void setTxFail(const quint32 value);
    void setRxFail(const quint32 value);


signals:
    void txPacketsChanged(const quint32 value);
    /*DEPRECATED*/ void TxPacketsChanged(quint32 value);
    void rxPacketsChanged(const quint32 value);
    /*DEPRECATED*/ void RxPacketsChanged(quint32 value);
    void txFailChanged(const quint32 value);
    /*DEPRECATED*/ void TxFailChanged(quint32 value);
    void rxFailChanged(const quint32 value);
    /*DEPRECATED*/ void RxFailChanged(quint32 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // HOTTBRIDGESTATUS_H

/**
 ******************************************************************************
 * @file       version_info.cpp.template
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2015.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2013.
 * @addtogroup VersionInfo
 * @{
 * @brief      The template file used to generate the real source file called
 *             build/gcs-synthetics/version_info.cpp
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

VersionInfo::VersionInfo()
{
}

QString VersionInfo::origin()
{
    return "https://github.com/Xpider/LibrePilot.git";
}

QString VersionInfo::revision()
{
    return "next:8c101adc-dirty 20190221 21:59";
}

QString VersionInfo::hash()
{
    return "8c101adcccabc57ecbfe5be9250344448bee7908";
}

QString VersionInfo::uavoHash()
{
    return "c16640bc7d66645e6bef1e8d042b7c7b8f7af373";
}

QString VersionInfo::uavoHashArray()
{
    return "{ 0xc1,0x66,0x40,0xbc,0x7d,0x66,0x64,0x5e,0x6b,0xef,0x1e,0x8d,0x04,0x2b,0x7c,0x7b,0x8f,0x7a,0xf3,0x73 }";
}

QString VersionInfo::label()
{
    return "16.09+r782-g8c101ad-dirty";
}

QString VersionInfo::tag()
{
    return "";
}

QString VersionInfo::tagOrBranch()
{
    return "next";
}

QString VersionInfo::tagOrHash8()
{
    return "8c101adc";
}

QString VersionInfo::hash8()
{
    return "8c101adc";
}

QString VersionInfo::fwTag()
{
    return "next-dirty";
}

QString VersionInfo::unixTime()
{
    return "1550786361";
}

QString VersionInfo::dateTime()
{
    return "20190221 21:59";
}

QString VersionInfo::date()
{
    return "20190221";
}

QString VersionInfo::day()
{
    return "21";
}

QString VersionInfo::month()
{
    return "02";
}

QString VersionInfo::year()
{
    return "2019";
}

QString VersionInfo::hour()
{
    return "21";
}

QString VersionInfo::minute()
{
    return "59";
}

QString VersionInfo::dirty()
{
    return "-dirty";
}

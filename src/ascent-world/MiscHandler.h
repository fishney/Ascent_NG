/*
 * Ascent MMORPG Server
 * Copyright (C) 2005-2011 Ascent Team <http://www.ascentemulator.net/>
 *
 * This software is  under the terms of the EULA License
 * All title, including but not limited to copyrights, in and to the Ascent Software
 * and any copies there of are owned by ZEDCLANS INC. or its suppliers. All title
 * and intellectual property rights in and to the content which may be accessed through
 * use of the Ascent is the property of the respective content owner and may be protected
 * by applicable copyright or other intellectual property laws and treaties. This EULA grants
 * you no rights to use such content. All rights not expressly granted are reserved by ZEDCLANS INC.
 *
 */

#ifndef __MISCHANDLER_H
#define __MISCHANDLER_H

#pragma pack(push,1)
struct GraveyardTeleport
{
    uint32 ID;
    float X;
    float Y;
    float Z;
    float O;
    uint32 ZoneId;
	uint32 AdjacentZoneId;
	uint32 MapId;
    uint32 FactionID;
};
#pragma pack(pop)

#endif


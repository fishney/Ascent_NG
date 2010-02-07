/*
 * Ascent MMORPG Server
 * Copyright (C) 2005-2010 Ascent Team <http://www.ascentemulator.net/>
 *
 * This software is  under the terms of the EULA License
 * All title, including but not limited to copyrights, in and to the AscentNG Software
 * and any copies there of are owned by ZEDCLANS INC. or its suppliers. All title
 * and intellectual property rights in and to the content which may be accessed through
 * use of the AscentNG is the property of the respective content owner and may be protected
 * by applicable copyright or other intellectual property laws and treaties. This EULA grants
 * you no rights to use such content. All rights not expressly granted are reserved by ZEDCLANS INC.
 *
 */

#ifndef _SPELLFAILURE_H
#define _SPELLFAILURE_H

enum SpellCastError
{
	SPELL_FAILED_AFFECTING_COMBAT                                = 0,
	SPELL_FAILED_ALREADY_AT_FULL_HEALTH                          = 1,
	SPELL_FAILED_ALREADY_AT_FULL_POWER                           = 2,
	SPELL_FAILED_ALREADY_BEING_TAMED                             = 3,
	SPELL_FAILED_ALREADY_HAVE_CHARM                              = 4,
	SPELL_FAILED_ALREADY_HAVE_SUMMON                             = 5,
	SPELL_FAILED_ALREADY_OPEN                                    = 6,
	SPELL_FAILED_AURA_BOUNCED                                    = 7,
	SPELL_FAILED_AUTOTRACK_INTERRUPTED                           = 8,
	SPELL_FAILED_BAD_IMPLICIT_TARGETS                            = 9,
	SPELL_FAILED_BAD_TARGETS                                     = 10,
	SPELL_FAILED_CANT_BE_CHARMED                                 = 11,
	SPELL_FAILED_CANT_BE_DISENCHANTED                            = 12,
	SPELL_FAILED_CANT_BE_DISENCHANTED_SKILL                      = 13,
	SPELL_FAILED_CANT_BE_PROSPECTED                              = 14,
	SPELL_FAILED_CANT_CAST_ON_TAPPED                             = 15,
	SPELL_FAILED_CANT_DUEL_WHILE_INVISIBLE                       = 16,
	SPELL_FAILED_CANT_DUEL_WHILE_STEALTHED                       = 17,
	SPELL_FAILED_CANT_STEALTH                                    = 18,
	SPELL_FAILED_CASTER_AURASTATE                                = 19,
	SPELL_FAILED_CASTER_DEAD                                     = 20,
	SPELL_FAILED_CHARMED                                         = 21,
	SPELL_FAILED_CHEST_IN_USE                                    = 22,
	SPELL_FAILED_CONFUSED                                        = 23,
	SPELL_FAILED_DONT_REPORT                                     = 24,
	SPELL_FAILED_EQUIPPED_ITEM                                   = 25,
	SPELL_FAILED_EQUIPPED_ITEM_CLASS                             = 26,
	SPELL_FAILED_EQUIPPED_ITEM_CLASS_MAINHAND                    = 27,
	SPELL_FAILED_EQUIPPED_ITEM_CLASS_OFFHAND                     = 28,
	SPELL_FAILED_ERROR                                           = 29,
	SPELL_FAILED_FIZZLE                                          = 30,
	SPELL_FAILED_FLEEING                                         = 31,
	SPELL_FAILED_FOOD_LOWLEVEL                                   = 32,
	SPELL_FAILED_HIGHLEVEL                                       = 33,
	SPELL_FAILED_HUNGER_SATIATED                                 = 34,
	SPELL_FAILED_IMMUNE                                          = 35,
	SPELL_FAILED_INTERRUPTED                                     = 36,
	SPELL_FAILED_INTERRUPTED_COMBAT                              = 37,
	SPELL_FAILED_ITEM_ALREADY_ENCHANTED                          = 38,
	SPELL_FAILED_ITEM_GONE                                       = 39,
	SPELL_FAILED_ITEM_NOT_FOUND                                  = 40,
	SPELL_FAILED_ITEM_NOT_READY                                  = 41,
	SPELL_FAILED_LEVEL_REQUIREMENT                               = 42,
	SPELL_FAILED_LINE_OF_SIGHT                                   = 43,
	SPELL_FAILED_LOWLEVEL                                        = 44,
	SPELL_FAILED_LOW_CASTLEVEL                                   = 45,
	SPELL_FAILED_MAINHAND_EMPTY                                  = 46,
	SPELL_FAILED_MOVING                                          = 47,
	SPELL_FAILED_NEED_AMMO                                       = 48,
	SPELL_FAILED_NEED_AMMO_POUCH                                 = 49,
	SPELL_FAILED_NEED_EXOTIC_AMMO                                = 50,
	SPELL_FAILED_NOPATH                                          = 51,
	SPELL_FAILED_NOT_BEHIND                                      = 52,
	SPELL_FAILED_NOT_FISHABLE                                    = 53,
	SPELL_FAILED_NOT_FLYING                                      = 54,
	SPELL_FAILED_NOT_HERE                                        = 55,
	SPELL_FAILED_NOT_INFRONT                                     = 56,
	SPELL_FAILED_NOT_IN_CONTROL                                  = 57,
	SPELL_FAILED_NOT_KNOWN                                       = 58,
	SPELL_FAILED_NOT_MOUNTED                                     = 59,
	SPELL_FAILED_NOT_ON_TAXI                                     = 60,
	SPELL_FAILED_NOT_ON_TRANSPORT                                = 61,
	SPELL_FAILED_NOT_READY                                       = 62,
	SPELL_FAILED_NOT_SHAPESHIFT                                  = 63,
	SPELL_FAILED_NOT_STANDING                                    = 64,
	SPELL_FAILED_NOT_TRADEABLE                                   = 65,
	SPELL_FAILED_NOT_TRADING                                     = 66,
	SPELL_FAILED_NOT_UNSHEATHED                                  = 67,
	SPELL_FAILED_NOT_WHILE_GHOST                                 = 68,
	SPELL_FAILED_NO_AMMO                                         = 69,
	SPELL_FAILED_NO_CHARGES_REMAIN                               = 70,
	SPELL_FAILED_NO_CHAMPION                                     = 71,
	SPELL_FAILED_NO_COMBO_POINTS                                 = 72,
	SPELL_FAILED_NO_DUELING                                      = 73,
	SPELL_FAILED_NO_ENDURANCE                                    = 74,
	SPELL_FAILED_NO_FISH                                         = 75,
	SPELL_FAILED_NO_ITEMS_WHILE_SHAPESHIFTED                     = 76,
	SPELL_FAILED_NO_MOUNTS_ALLOWED                               = 77,
	SPELL_FAILED_NO_PET                                          = 78,
	SPELL_FAILED_NO_POWER                                        = 79,
	SPELL_FAILED_NOTHING_TO_DISPEL                               = 80,
	SPELL_FAILED_NOTHING_TO_STEAL                                = 81,
	SPELL_FAILED_ONLY_ABOVEWATER                                 = 82,
	SPELL_FAILED_ONLY_DAYTIME                                    = 83,
	SPELL_FAILED_ONLY_INDOORS                                    = 84,
	SPELL_FAILED_ONLY_MOUNTED                                    = 85,
	SPELL_FAILED_ONLY_NIGHTTIME                                  = 86,
	SPELL_FAILED_ONLY_OUTDOORS                                   = 87,
	SPELL_FAILED_ONLY_SHAPESHIFT                                 = 88,
	SPELL_FAILED_ONLY_STEALTHED                                  = 89,
	SPELL_FAILED_ONLY_UNDERWATER                                 = 90,
	SPELL_FAILED_OUT_OF_RANGE                                    = 91,
	SPELL_FAILED_PACIFIED                                        = 92,
	SPELL_FAILED_POSSESSED                                       = 93,
	SPELL_FAILED_REAGENTS                                        = 94,
	SPELL_FAILED_REQUIRES_AREA                                   = 95,
	SPELL_FAILED_REQUIRES_SPELL_FOCUS                            = 96,
	SPELL_FAILED_ROOTED                                          = 97,
	SPELL_FAILED_SILENCED                                        = 98,
	SPELL_FAILED_SPELL_IN_PROGRESS                               = 99,
	SPELL_FAILED_SPELL_LEARNED                                   = 100,
	SPELL_FAILED_SPELL_UNAVAILABLE                               = 101,
	SPELL_FAILED_STUNNED                                         = 102,
	SPELL_FAILED_TARGETS_DEAD                                    = 103,
	SPELL_FAILED_TARGET_AFFECTING_COMBAT                         = 104,
	SPELL_FAILED_TARGET_AURASTATE                                = 105,
	SPELL_FAILED_TARGET_DUELING                                  = 106,
	SPELL_FAILED_TARGET_ENEMY                                    = 107,
	SPELL_FAILED_TARGET_ENRAGED                                  = 108,
	SPELL_FAILED_TARGET_FRIENDLY                                 = 109,
	SPELL_FAILED_TARGET_IN_COMBAT                                = 110,
	SPELL_FAILED_TARGET_IS_PLAYER                                = 111,
	SPELL_FAILED_TARGET_IS_PLAYER_CONTROLLED                     = 112,
	SPELL_FAILED_TARGET_NOT_DEAD                                 = 113,
	SPELL_FAILED_TARGET_NOT_IN_PARTY                             = 114,
	SPELL_FAILED_TARGET_NOT_LOOTED                               = 115,
	SPELL_FAILED_TARGET_NOT_PLAYER                               = 116,
	SPELL_FAILED_TARGET_NO_POCKETS                               = 117,
	SPELL_FAILED_TARGET_NO_WEAPONS                               = 118,
	SPELL_FAILED_TARGET_UNSKINNABLE                              = 119,
	SPELL_FAILED_THIRST_SATIATED                                 = 120,
	SPELL_FAILED_TOO_CLOSE                                       = 121,
	SPELL_FAILED_TOO_MANY_OF_ITEM                                = 122,
	SPELL_FAILED_TOTEM_CATEGORY                                  = 123,
	SPELL_FAILED_TOTEMS                                          = 124,
	SPELL_FAILED_TRAINING_POINTS                                 = 125,
	SPELL_FAILED_TRY_AGAIN                                       = 126,
	SPELL_FAILED_UNIT_NOT_BEHIND                                 = 127,
	SPELL_FAILED_UNIT_NOT_INFRONT                                = 128,
	SPELL_FAILED_WRONG_PET_FOOD                                  = 129,
	SPELL_FAILED_NOT_WHILE_FATIGUED                              = 130,
	SPELL_FAILED_TARGET_NOT_IN_INSTANCE                          = 131,
	SPELL_FAILED_NOT_WHILE_TRADING                               = 132,
	SPELL_FAILED_TARGET_NOT_IN_RAID                              = 133,
	SPELL_FAILED_DISENCHANT_WHILE_LOOTING                        = 134,
	SPELL_FAILED_PROSPECT_WHILE_LOOTING                          = 135,
	SPELL_FAILED_PROSPECT_NEED_MORE                              = 136,
	SPELL_FAILED_TARGET_FREEFORALL                               = 137,
	SPELL_FAILED_NO_EDIBLE_CORPSES                               = 138,
	SPELL_FAILED_ONLY_BATTLEGROUNDS                              = 139,
	SPELL_FAILED_TARGET_NOT_GHOST                                = 140,
	SPELL_FAILED_TOO_MANY_SKILLS                                 = 141,
	SPELL_FAILED_TRANSFORM_UNUSABLE                              = 142,
	SPELL_FAILED_WRONG_WEATHER                                   = 143,
	SPELL_FAILED_DAMAGE_IMMUNE                                   = 144,
	SPELL_FAILED_PREVENTED_BY_MECHANIC                           = 145,
	SPELL_FAILED_PLAY_TIME                                       = 146,
	SPELL_FAILED_REPUTATION                                      = 147,
	SPELL_FAILED_MIN_SKILL                                       = 148,
	SPELL_FAILED_NOT_IN_ARENA                                    = 149,
	SPELL_FAILED_NOT_ON_SHAPESHIFT                               = 150,
	SPELL_FAILED_NOT_ON_STEALTHED                                = 151,
	SPELL_FAILED_NOT_ON_DAMAGE_IMMUNE                            = 152,
	SPELL_FAILED_NOT_ON_MOUNTED                                  = 153,
	SPELL_FAILED_TOO_SHALLOW                                     = 154,
	SPELL_FAILED_TARGET_NOT_IN_SANCTUARY                         = 155,
	SPELL_FAILED_TARGET_IS_TRIVIAL                               = 156,
	SPELL_FAILED_BM_OR_INVISGOD                                  = 157,
	SPELL_FAILED_EXPERT_RIDING_REQUIREMENT                       = 158,
	SPELL_FAILED_ARTISAN_RIDING_REQUIREMENT                      = 159,
	SPELL_FAILED_NOT_IDLE                                        = 160,
	SPELL_FAILED_NOT_INACTIVE                                    = 161,
	SPELL_FAILED_UNKNOWN                                         = 162,
};

#endif


/* $Id: signs_base.h 17248 2009-08-21 20:21:05Z rubidium $ */

/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file signs_base.h Base class for signs. */

#ifndef SIGNS_BASE_H
#define SIGNS_BASE_H

#include "signs_type.h"
#include "viewport_type.h"
#include "tile_type.h"
#include "core/pool_type.hpp"

typedef Pool<Sign, SignID, 16, 64000> SignPool;
extern SignPool _sign_pool;

struct Sign : SignPool::PoolItem<&_sign_pool> {
	char *name;
	ViewportSign sign;
	int32        x;
	int32        y;
	byte         z;
	OwnerByte    owner; // placed by this company. Anyone can delete them though. OWNER_NONE for gray signs from old games.

	/**
	 * Creates a new sign
	 */
	Sign(Owner owner = INVALID_OWNER);

	/** Destroy the sign */
	~Sign();

	void UpdateVirtCoord();
};

#define FOR_ALL_SIGNS_FROM(var, start) FOR_ALL_ITEMS_FROM(Sign, sign_index, var, start)
#define FOR_ALL_SIGNS(var) FOR_ALL_SIGNS_FROM(var, 0)

#endif /* SIGNS_BASE_H */
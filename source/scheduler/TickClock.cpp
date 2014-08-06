/**
 * \file
 * \brief TickClock class implementation
 *
 * \author Copyright (C) 2014 Kamil Szczygiel http://www.distortec.com http://www.freddiechopin.info
 *
 * \par License
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not
 * distributed with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * \date 2014-08-06
 */

#include "distortos/scheduler/TickClock.hpp"

#include "distortos/scheduler/schedulerInstance.hpp"
#include "distortos/scheduler/Scheduler.hpp"

namespace distortos
{

namespace scheduler
{

TickClock::time_point TickClock::now()
{
	const auto tick_count = schedulerInstance.getTickCount();
	return time_point{duration{tick_count}};
}

}	// namespace scheduler

}	// namespace distortos

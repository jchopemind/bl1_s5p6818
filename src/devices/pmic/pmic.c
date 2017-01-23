/*
 * Copyright (C) 2016  Nexell Co., Ltd.
 * Author: DeokJin, Lee <truevirtue@nexell.co.kr>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <sysheader.h>
#include <pmic.h>

extern void DMC_Delay(int milisecond);

void pmic_initalize(void)
{
#if defined(DRONE_PMIC)
	pmic_drone();
#elif defined(AVN_PMIC)
	pmic_avn();
#elif defined(ASB_PMIC)
	pmic_asb();
#elif defined(SVT_PMIC)
	pmic_svt();
#elif defined(BF700_PMIC)
	pmic_bf700();
#elif defined(RAPTOR_PMIC)
	pmic_raptor();
#endif
	DMC_Delay(100 * 1000);
}
/*
 * FPS_Regulator.h
 *
 *  Created on: Jun 24, 2010
 *      Author: bryan
 */

#ifndef FPS_REGULATOR_H_
#define FPS_REGULATOR_H_

#include "Timer.h"
#include <SDL/SDL.h>

class FPS_Regulator {

public:
	int fps;
	Timer time;

public:
	FPS_Regulator();

	~FPS_Regulator();

	FPS_Regulator(int f);

	int getFPS();

	Timer& getTimer();

	void capFPS();
};

#endif /* FPS_REGULATOR_H_ */

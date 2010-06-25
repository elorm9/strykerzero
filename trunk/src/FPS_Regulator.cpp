/*
 * FPS_Regulator.cpp
 *
 *  Created on: Jun 24, 2010
 *      Author: bryan
 */

#include "FPS_Regulator.h"

FPS_Regulator::FPS_Regulator() {
	fps = 0;
}

FPS_Regulator::~FPS_Regulator() {

}

FPS_Regulator::FPS_Regulator(int f){
	fps = f;
}

int FPS_Regulator::getFPS(){
	return fps;
}


Timer& FPS_Regulator::getTimer(){
	return time;
}

void FPS_Regulator::capFPS(){
	//regulate the frame rate
	if( time.get_ticks() < 1000 / fps  ){
		//Sleep the remaining frame time
		SDL_Delay( ( 1000 / fps ) - time.get_ticks() );
	}
}

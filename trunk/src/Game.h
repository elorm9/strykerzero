/*
 * Game.h
 *
 *  Created on: Jun 22, 2010
 *      Author: bryan
 */




#include <SDL/SDL.h>
#include "Craft.h"
#include "EnemyCreator.h"
#include "Background.h"


#ifndef GAME_H_
#define GAME_H_


SDL_Event event;


class Game{
private:

	bool gameRunning;


public:
	Game(){
		gameRunning = true;
		init();
	}

	bool init(){



		//If everything initialized fine
		return true;
	}


	void quit(){
		if(gameRunning == false){
			SDL_Quit();
		}
	}


	bool isRunning(){
		return gameRunning;
	}

	bool setRun(bool b){
		gameRunning = b;
	}

};

#endif /* GAME_H_ */

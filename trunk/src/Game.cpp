/*
 * Game.cpp
 *
 *  Created on: Jun 22, 2010
 *      Author: bryan
 */

#include "Craft.h"
#include "EnemyCreator.h"
#include "Background.h"
#include "FPS_Regulator.h"

SDL_Surface* screen;
SDL_Event event;
bool gameRunning = true;

using namespace std;

bool init(){
	//Initialize all SDL subsystems
	if(SDL_Init( SDL_INIT_EVERYTHING ) == -1) return false;

	//Set up the screen
	screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_DOUBLEBUF|SDL_HWSURFACE );

	if(screen == NULL) return false;
	//Set the window caption
	SDL_WM_SetCaption( "SDL Game", NULL );

	return true;
}

int main( int argc, char* args[] ){

	if (!init()) return -1;

	Craft user(200,100);
	EnemyManager enemies(20,1000);
	Background bG(true);
	FPS_Regulator fps(60);

	while(gameRunning){

		enemies.addEnemy();

		fps.getTimer().start();
		SDL_FillRect( screen, NULL, 0 );
		bG.draw(screen);
		user.draw(screen);
		user.drawMissiles(screen);
		user.drawHP(screen);

		enemies.draw(screen);

		SDL_Flip(screen);

		while( SDL_PollEvent( &event ) ) {


			//If the user has Xed out the window
			if( event.type == SDL_QUIT )
			{
				//Quit the program
				gameRunning = false;
			}

			//Handle events
			user.handle_input(event);

		}

		bG.move();
		enemies.move();
		user.move();
		user.missileAction(enemies.getEnemies());
		//user.missileAction();

		fps.capFPS();

	}

	user.clean_up();
	enemies.cleanUP();
	bG.getImage().clean_up();

	SDL_Quit();
	return 0;
}


/*
 * Craft.h
 *
 *  Created on: Jun 22, 2010
 *      Author: bryan
 */

#ifndef CRAFT_H_
#define CRAFT_H_
#include "Airplane.h"
#include "Enemy.h"

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 480;
const int SCREEN_BPP = 32;

bool init();

class Craft: public Airplane{

private:
	int numMissiles;
	int numBlueBullets;
	int numGreenBullets;

public:
	Craft():Airplane(){
		getHP().setHealth(100);
		getHP().setMaxHealth(100);

		numMissiles = 0;
		numBlueBullets = 0;
		numGreenBullets = 0;

		setDX(0);
		setDY(0);
	}

	Craft(int x, int y):Airplane(x,y){

		getHP().setHealth(100);
		getHP().setMaxHealth(100);

		setDX(0);
		setDY(0);

		numMissiles = 5;
		numBlueBullets = 0;
		numGreenBullets = 0;
		getImage().setImage("src/Images/plane2.png");
		getBound().setR( (getImage().getSurface()->w)/2);
	}

	int getNumMissiles();
	void addMissiles(int a);

	int getNumGreenBullets();
	void addGreenBullets(int a);

	int getNumBlueBullets();
	void addBlueBullets(int a);

	void fireRedBullet();
	void fireBlueBullet();
	void fireLaser();
	void fireMissile();

	void handle_input(SDL_Event event);

	void drawHP(SDL_Surface* screen);

	void missileAction(list<Enemy> &enemies);



};
#endif /* CRAFT_H_ */

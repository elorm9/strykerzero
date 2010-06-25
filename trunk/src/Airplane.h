/*
 * Airplane.h
 *
 *  Created on: Jun 22, 2010
 *      Author: bryan
 */

#ifndef AIRPLANE_H_
#define AIRPLANE_H_
#include "Entity.h"
#include "Projectile.h"
#include "Health.h"
#include <list>


const int CRAFT_SIZE = 30;

class Airplane: public Entity{

private:
	//this stores the current HP of the craft
	Health HP;

	//this deque stores all missiles of each airplane
	list<Projectile> missiles;

public:

	Airplane():Entity(){
		HP.setHealth(0);
		HP.setMaxHealth(0);
	}


	Airplane(int x, int y):Entity(x,y){
		HP.setHealth(0);
		HP.setMaxHealth(0);
	}

	virtual void fireRedBullet(){

	}

	virtual void fireBlueBullet(){

	}

	virtual void fireMissile(){

	}

	virtual void fireLaser(){

	}

	Health& getHP();

	list<Projectile> &getMissiles();
	void checkMissiles();

	//this function draws all of the missiles in the missile arraylist
	void drawMissiles(SDL_Surface* screen);

	void clean_up();
};

#endif /* AIRPLANE_H_ */

/*
 * Airplane.cpp
 *
 *  Created on: Jun 24, 2010
 *      Author: bryan
 */


#include "Airplane.h"

Health& Airplane::getHP(){
	return HP;
}

list<Projectile>& Airplane::getMissiles(){
	return missiles;
}

void Airplane::checkMissiles(){

	list<Projectile>::iterator iter;
	for( iter = missiles.begin() ; iter != missiles.end(); ++iter){
		if (!(*iter).isVisible()) {
			iter = missiles.erase(iter);
		}
	}
}

		//this function draws all of the missiles in the missile arraylist
void Airplane::drawMissiles(SDL_Surface* screen){

	if(missiles.size() > 0){
		list<Projectile>::iterator iter;

		for(iter = missiles.begin(); iter != missiles.end(); iter++){
			(*iter).draw(screen);
		}
	}
}


void Airplane::clean_up(){

	if(missiles.size() > 0){
		list<Projectile>::iterator iter;

		for(iter = missiles.begin(); iter != missiles.end(); iter++){
			Projectile& ref(*iter);
			ref.getImage().clean_up();
		}

		missiles.clear();
	}

	getImage().clean_up();


}

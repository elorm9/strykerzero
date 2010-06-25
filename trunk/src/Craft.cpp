/*
 * Craft.cpp
 *
 *  Created on: Jun 24, 2010
 *      Author: bryan
 */


#include "Craft.h"


//the functions below are used to get this craft's current number of
//missiles and to add more missiles
int Craft::getNumMissiles(){
	return numMissiles;
}

void Craft::addMissiles(int a){
	numMissiles += a;
}

int Craft::getNumGreenBullets(){
	return numGreenBullets;
}

void Craft::addGreenBullets(int a){
	numGreenBullets+= a;
}

int Craft::getNumBlueBullets(){
	return numBlueBullets;
}

void Craft::addBlueBullets(int a){
		numBlueBullets+= a;
}

	//fire weapons
void Craft::fireRedBullet(){
	int x = getLoc().getX();
	int y = getLoc().getY();

	RedBullet a(x + CRAFT_SIZE, y + CRAFT_SIZE );
	getMissiles().push_back(a);
}

void Craft::fireBlueBullet(){
	int x = getLoc().getX();
	int y = getLoc().getY();

	BlueBullet a(x + CRAFT_SIZE, y + CRAFT_SIZE );
	getMissiles().push_back(a);
	numBlueBullets++;
}

void Craft::fireLaser(){
	int x = getLoc().getX();
	int y = getLoc().getY();

	Laser a(x + CRAFT_SIZE, y + CRAFT_SIZE );
	getMissiles().push_back(a);
}

void Craft::fireMissile(){
	int x = getLoc().getX();
	int y = getLoc().getY();

	Missile a(x + CRAFT_SIZE, y + CRAFT_SIZE );
	getMissiles().push_back(a);
	numMissiles++;
}

void Craft::handle_input(SDL_Event event){

	//If a key was pressed
	if( event.type == SDL_KEYDOWN ){
		//Adjust the velocity

		switch( event.key.keysym.sym ){
			case SDLK_UP: setDY(-2);
				break;

			case SDLK_DOWN: setDY(2);
				break;

			case SDLK_LEFT: setDX(-2);
				break;

			case SDLK_RIGHT: setDX(2);
				break;

			default:
				break;

		}
	}

	//If a key was released
	else if( event.type == SDL_KEYUP ) {

		switch( event.key.keysym.sym ){

			case SDLK_UP: setDY(0);
				break;

			case SDLK_DOWN: setDY(0);
				break;

			case SDLK_LEFT: setDX(0);
				break;


			case SDLK_RIGHT: setDX(0);
				break;

			case SDLK_a: fireRedBullet();
				break;

			case SDLK_s: fireMissile();
				break;

			case SDLK_d: fireBlueBullet();
				break;

			case SDLK_f: fireLaser();
				break;

			default:
				break;
		}
	}
}

void Craft::drawHP(SDL_Surface* screen){
	SDL_Rect hpBar;
	hpBar.x = 20;
	hpBar.y = 450;
	hpBar.h = 15;
	hpBar.w = getHP().getHealth()*2;
	SDL_FillRect(screen, &hpBar, 0x0000FF00);
}

void Craft::missileAction(list<Enemy> &enemies){

	checkMissiles();

	if(getMissiles().size() > 0){

		list<Projectile>::iterator missile;
		list<Enemy>::iterator enemy;

		for(missile = getMissiles().begin(); missile != getMissiles().end(); ++missile){

			for(enemy = enemies.begin(); enemy != enemies.end(); ++enemy){

				if((*missile).getBound().check_collision( (*enemy).getBound() ) ){
					(*missile).setVisible(false);
					(*enemy).getHP().reduceHealth((*missile).getDamage());

				}

			}

			if((*missile).isVisible())
				(*missile).move();


		}

	}

}

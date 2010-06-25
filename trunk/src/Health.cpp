/*
 * HP.cpp
 *
 *  Created on: Jun 24, 2010
 *      Author: bryan
 */

#include "Health.h"

Health::Health() {
	health = 0;
	maxHealth = 0;

}

Health::~Health() {

}

//reduces hp by the specified amount of damage
void Health::reduceHealth(int damage){
	health -= damage;
}
//increase the HP
void Health::increaseHealth(int h){
	health += h;

	if(health > maxHealth)
		health = maxHealth;
}

//set the HP
void Health::setHealth(int h){
	health = h;
}

	//get the HP
int Health::getHealth(){
	return health;
}

//set the maximum HP
void Health::setMaxHealth(int h){
	maxHealth = h;
}

int Health::getMaxHealth(){
	return maxHealth;
}



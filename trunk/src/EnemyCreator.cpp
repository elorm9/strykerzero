/*
 * EnemyCreator.cpp
 *
 *  Created on: Jun 24, 2010
 *      Author: bryan
 */


#include "EnemyCreator.h"

void EnemyManager::updateTime(){
	if(sTicks == 0)
		sTicks = SDL_GetTicks();

	eTicks = SDL_GetTicks();
}


//checks enemies to see if they are still visible
//and removes them accordingly
void EnemyManager::check(){

	if(enemies.size() > 0){
		list<Enemy>::iterator enemy;

		for(enemy = enemies.begin(); enemy != enemies.end(); ++enemy){

			if(!(*enemy).isVisible() || (*enemy).getHP().getHealth() <= 0 ){
				(*enemy).getImage().clean_up();
				enemy = enemies.erase(enemy);
			}

		}

	}
}

//draw the HP bar of each enemy
void EnemyManager::drawHP(SDL_Surface* screen){

	if( enemies.size() > 0 ){
		list<Enemy>::iterator enemy;

		for(enemy = enemies.begin(); enemy != enemies.end(); ++enemy){
				if((*enemy).isVisible())
					(*enemy).drawHP(screen);
		}
	}
}

//draw all enemy missiles
void EnemyManager::drawMissiles(SDL_Surface* screen){

	if(enemies.size() > 0){

		list<Enemy>::iterator enemy;
		for(enemy = enemies.begin(); enemy != enemies.end(); ++enemy){

			if((*enemy).isVisible() && (*enemy).getMissiles().size() > 0)
				(*enemy).drawMissiles(screen);
		}
	}
}


//sets the number of enemies
void EnemyManager::setNumEnemies(int n) {
	numEnemies = n;
}

void EnemyManager::addEnemy(){

	//x and y coordinate for where enemies start
	int x = 800;
	int y = 0;
	int j = 0;

	int ab = numEnemies;

	updateTime();

	if(eTicks - sTicks >= delay){
		sTicks = 0;

		//creates an enemy based on the value of j
		if(numEnemies > 0){

			Enemy a;

			srand(time(NULL) * ab);
			//y coordinate is generated randomly
			y = rand()%300 + 100 ;


			//j is used to determine which enemy to create
			j = rand()%7 + 1;


			if(j == 1)
				a = Enemy1(x,y);

			else
			if(j == 2)
				a = Enemy2(x,y);

			else
			if(j == 3)
				a = Enemy3(x,y);

			else
			if(j == 4)
				a = Enemy4(x,y);

			else
			if(j == 5)
				a = Enemy5(x,20);

			else
			if(j == 6)
				a = Enemy6(x,20);

			else
			if(j == 7)
				a = Enemy7(x,20);

			else
			if(j == 8)
				a = Enemy8(x,20);

			enemies.push_back(a);
			numEnemies--;
		}

	}
}

void EnemyManager::setDelay(int d){
	delay = d;
}

//draw all  enemies on the screen
void EnemyManager::draw(SDL_Surface* screen){
	check();

	if( enemies.size() > 0 ){
		list<Enemy>::iterator iter = enemies.begin();

		for(; iter != enemies.end(); iter++){

			if((*iter).isVisible())
				(*iter).draw(screen);
		}

  	}
   drawHP(screen);
}



//handles enemy missile collisions with the user's craft
void EnemyManager::missileAction(Airplane a){
	list<Enemy>::iterator enemy;

	for(enemy = enemies.begin(); enemy != enemies.end(); enemy++){
		(*enemy).missileAction(a);
	}
}

//updates the position of each enemy
void EnemyManager::move(){

	if(enemies.size() > 0){
		list<Enemy>::iterator enemy;

		for(enemy = enemies.begin(); enemy != enemies.end(); ++enemy){
			if((*enemy).isVisible())
				(*enemy).move();
	}
  }
}

//causes each enemy to attack
void EnemyManager::attack(){
	list<Enemy>::iterator enemy;

	if(enemies.size() > 0){
		for(enemy = enemies.begin(); enemy != enemies.end(); ++enemy){

		if((*enemy).isVisible())
			(*enemy).attack();
		}
	}
}

//return the arraylist of enemies
list<Enemy>& EnemyManager::getEnemies(){
	return enemies;
}

//free the image surfaces of each enemy
void EnemyManager::cleanUP(){

	if(enemies.size() > 0){
		list<Enemy>::iterator enemy;
		for(enemy = enemies.begin(); enemy != enemies.end(); ++enemy){
			(*enemy).getImage().clean_up();
		}
       enemies.clear();
	}

}





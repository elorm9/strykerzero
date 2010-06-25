/*
 * EnemyCreator.h
 *
 *  Created on: Jun 19, 2010
 *      Author: bryan
 */

#ifndef ENEMYCREATOR_H_
#define ENEMYCREATOR_H_

#include "Enemy.h"
#include <SDL/SDL.h>
#include <list>
//#include <cstdlib>

#include <ctime>
#include <iostream>
#include "Item.h"

class EnemyManager {

	private:

		//list of enemies
		list<Enemy> enemies;

        //determines how many enemies to create
        int numEnemies;

        //amount of time to wait before creating another enemy
		int delay;

		int sTicks;
		int eTicks;

        void updateTime();

        //checks enemies to see if they are still visible
        //and removes them accordingly
        void check();

        //draw the HP bar of each enemy
 		void drawHP(SDL_Surface* screen);

 		  //draw all enemy missiles
 		void drawMissiles(SDL_Surface* screen);


	public:
        //default constructor
        EnemyManager(){
        	numEnemies = 0;
        	sTicks = 0;
        	eTicks = 0;
        }

        EnemyManager(int NumEnemies)
        {
        	numEnemies = NumEnemies;
        	sTicks = 0;
        	eTicks = 0;
        }

        EnemyManager(int n, int d){
        	numEnemies = n;
        	delay = d;
			sTicks = 0;
			eTicks = 0;
        }

        //sets the number of enemies
        void setNumEnemies(int n);

        //add a random enemy into the list

        void addEnemy();

        void setDelay(int d);

        //draw all  enemies on the screen
        void draw(SDL_Surface* screen);

        //handles enemy missile collisions with the user's craft
        void missileAction(Airplane a);

        //updates the position of each enemy
        void move();

        //causes each enemy to attack
        void attack();

        //return the arraylist of enemies
        list<Enemy> &getEnemies();

        //free the image surfaces of each enemy
        void cleanUP();


};

#endif /* ENEMYCREATOR_H_ */

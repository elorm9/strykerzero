/*
 * Enemy.h
 *
 *  Created on: Jun 19, 2010
 *      Author: bryan
 */

#ifndef ENEMY_H_
#define ENEMY_H_
#include "Airplane.h"
#include "Projectile.h"

//standard class for enemies
class Enemy: public Airplane{


	//default constructor
	public:
		Enemy():Airplane(){}

		~Enemy(){

		}
        //constructs an enemy at the specified
        //x and y coordinates
        Enemy(int x, int y):Airplane(x,y){}

        /*
        void dropItem(ItemCollector a){
                int chance = 0;

                chance = (int)(Math.random()*100);
                if(chance <= 40)
                        a.addRandomItem(this);
        }
*/

        //updates the position of the enemy
        void move();
        //updates the position of enemy missiles and
        //handles missiles collisions with the user's craft
        void missileAction(Airplane a);


        //draw a small HP bar right above the enemy
        void drawHP(SDL_Surface* screen);

        //allows the enemy to fire one missile at a time
        void attack();

};

class Enemy1 : public Enemy{

	public:
		Enemy1(): Enemy(){};

		Enemy1(int x, int y):Enemy(x,y){
			setVisible(true);

		    getImage().setImage("src/Images/Enemy1.png");

		    getHP().setHealth(20);
		    getHP().setMaxHealth(20);

		    setDX(-1);
		    setDY(0);
		    getBound().setR( (getImage().getSurface()->w)/2);
		}

		Enemy1(string ref, int x, int y):Enemy(x,y) {

			setVisible(true);
			getImage().setImage(ref);
			getHP().setHealth(20);
			getHP().setMaxHealth(20);

			setDX(-1);
			setDY(0);
			getBound().setR( (getImage().getSurface()->w)/2);
		}

};

class Enemy2 : public Enemy{

	public:
		Enemy2(): Enemy(){};

		Enemy2(int x, int y):Enemy(x,y){
			setVisible(true);
		    getImage().setImage("src/Images/Enemy2.png");
		    getHP().setHealth(20);
		    getHP().setMaxHealth(20);

		    setDX(-1);
		    setDY(0);
		    getBound().setR( (getImage().getSurface()->w)/2);
		}

		Enemy2(string ref, int x, int y):Enemy(x,y) {

			setVisible(true);
			getImage().setImage(ref);
			getHP().setHealth(20);
			getHP().setMaxHealth(20);

			setDX(-1);
			setDY(0);
			getBound().setR( (getImage().getSurface()->w)/2);
		}

};

class Enemy3 : public Enemy{

	public:
		Enemy3(): Enemy(){};

		Enemy3(int x, int y):Enemy(x,y){
			setVisible(true);
		    getImage().setImage("src/Images/Enemy3.png");
		    getHP().setHealth(20);

		    getHP().setMaxHealth(20);
		    setDX(-1);
		    setDY(0);
		    getBound().setR( (getImage().getSurface()->w)/2);
		}

		Enemy3(string ref, int x, int y):Enemy(x,y) {

			setVisible(true);
			getImage().setImage(ref);
			getHP().setHealth(20);

			getHP().setMaxHealth(20);
			setDX(-1);
			setDY(0);
			getBound().setR( (getImage().getSurface()->w)/2);
		}

};

class Enemy4 : public Enemy{

	public:
		Enemy4(): Enemy(){};

		Enemy4(int x, int y):Enemy(x,y){
			setVisible(true);
		    getImage().setImage("src/Images/Enemy4.png");
		    getHP().setHealth(20);

		    getHP().setMaxHealth(20);
		    setDX(-1);
		    setDY(0);
		    getBound().setR( (getImage().getSurface()->w)/2);
		}

		Enemy4(string ref, int x, int y):Enemy(x,y) {

			setVisible(true);
			getImage().setImage(ref);
			getHP().setHealth(20);

			getHP().setMaxHealth(20);
			setDX(-1);
			setDY(0);
			getBound().setR( (getImage().getSurface()->w)/2);
		}

};

class Enemy5 : public Enemy{

	public:
		Enemy5(): Enemy(){};

		Enemy5(int x, int y):Enemy(x,y){
			setVisible(true);
		    getImage().setImage("src/Images/Enemy5.png");
		    getHP().setHealth(20);

		    getHP().setMaxHealth(20);
		    setDX(-1);
		    setDY(0);
		    getBound().setR( (getImage().getSurface()->w)/2);
		}

		Enemy5(string ref, int x, int y):Enemy(x,y) {

			setVisible(true);
			getImage().setImage(ref);
			getHP().setHealth(20);

			getHP().setMaxHealth(20);
			setDX(-1);
			setDY(0);
			getBound().setR( (getImage().getSurface()->w)/2);
		}

};

class Enemy6 : public Enemy{

	public:
		Enemy6(): Enemy(){};

		Enemy6(int x, int y):Enemy(x,y){
			setVisible(true);
		    getImage().setImage("src/Images/Enemy6.png");
		    getHP().setHealth(20);

		    getHP().setMaxHealth(20);
		    setDX(-1);
		    setDY(0);
		    getBound().setR( (getImage().getSurface()->w)/2);
		}

		Enemy6(string ref, int x, int y):Enemy(x,y) {

			setVisible(true);
			getImage().setImage(ref);
			getHP().setHealth(20);

			getHP().setMaxHealth(20);
			setDX(-1);
			setDY(0);
			getBound().setR( (getImage().getSurface()->w)/2);
		}

};

class Enemy7 : public Enemy{

	public:
		Enemy7(): Enemy(){};

		Enemy7(int x, int y):Enemy(x,y){
			setVisible(true);
		    getImage().setImage("src/Images/Enemy7.png");
		    getHP().setHealth(20);

		    getHP().setMaxHealth(20);
		    setDX(-1);
		    setDY(0);
		    getBound().setR( (getImage().getSurface()->w)/2);
		}

		Enemy7(string ref, int x, int y):Enemy(x,y) {

			setVisible(true);
			getImage().setImage(ref);
			getHP().setHealth(20);

			getHP().setMaxHealth(20);
			setDX(-1);
			setDY(0);
			getBound().setR( (getImage().getSurface()->w)/2);
		}

};

class Enemy8 : public Enemy{

	public:
		Enemy8(): Enemy(){};

		Enemy8(int x, int y):Enemy(x,y){
			setVisible(true);
		    getImage().setImage("src/Images/Enemy8.png");
		    getBound().setR( (getImage().getSurface()->w)/2);
		    getHP().setHealth(20);

		    getHP().setMaxHealth(20);
		    setDX(-1);
		    setDY(0);
		}

		Enemy8(string ref, int x, int y):Enemy(x,y) {

			setVisible(true);
			getImage().setImage(ref);
			getHP().setHealth(20);

			getHP().setMaxHealth(20);
			setDX(-1);
			setDY(0);
			getBound().setR( (getImage().getSurface()->w)/2);
		}

};

#endif /* ENEMY_H_ */

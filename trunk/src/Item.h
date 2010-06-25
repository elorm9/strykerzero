/*
 * Item.h
 *
 *  Created on: Jun 19, 2010
 *      Author: bryan
 */

#ifndef ITEM_H_
#define ITEM_H_
#include "Craft.h"
#include <cstdlib>


class Item: public Entity{

	public:
		Item():Entity(){}

        //set the item in the specified x and y coordinates
        Item(int x, int y):Entity(x,y){
        	setDX(-1);
        	setDY(0);
        	setVisible(true);
		}


        void collidesWith(Craft a){

        }


        //the effect function allows the item
        //to give bonuses (extra HP, ammo etc)
        //to the user craft
        virtual void effect(Airplane a){
        	cout <<"Default effect!";
        }

        void move(){

        	Entity::move();

        	if(getLoc().getX() < BOARD_STARTX)
        		setVisible(false);
        }

};

class Item_BlueBullet: public Item{

	public:
        Item_BlueBullet():Item(){
        	setDX(-1);
        	setDY(0);
        	setVisible(true);
        }

        Item_BlueBullet(int x, int y): Item(x,y){
        	getImage().setImage("src/Images/12px-blue-round.png");
        	getBound().setR( (getImage().getSurface()->w)/2);
        	setVisible(true);
        	setDX(-1);
        	setDY(0);
        }

        void effect(Craft a) {
        	a.addBlueBullets(20);
        }



};

class Item_GreenLaser: public Item{

	public:
		Item_GreenLaser():Item(){
			setDX(-1);
			setDY(0);
			setVisible(true);
		}

        Item_GreenLaser(int x, int y):Item(x,y)
        {
        	getImage().setImage("src/Images/12px-green-round.png");
        	getBound().setR( (getImage().getSurface()->w)/2);
        	setVisible(true);
        	setDX(-1);
        	setDY(0);
        }

        void effect(Craft a) {
        	a.addGreenBullets(5);
        }

};

class Item_Missile: public Item{

	public:
		Item_Missile():Item(){
			setDX(-1);
			setDY(0);
			setVisible(true);
		}

        Item_Missile(int x, int y): Item(x,y){

        	getImage().setImage("src/Images/12px-purple-round.png");
        	getBound().setR( (getImage().getSurface()->w)/2);
        	setVisible(true);
        	setDX(-1);
        	setDY(0);
        }

         void effect(Craft a) {
        	 a.addMissiles(3);
        }

};

class Item_HP : public Item{

	public:
        Item_HP():Item(){
        	setDX(-1);
        	setDY(0);
        	setVisible(true);
        }

        Item_HP(int x, int y):Item(x,y)
        {
        	getImage().setImage("src/Images/40px-electric.png");
        	getBound().setR( (getImage().getSurface()->w)/2);
        	setVisible(true);
        	setDX(-1);
        	setDY(0);
        }

        void effect(Craft a) {
        	a.getHP().increaseHealth(20);
        }

};




#endif /* ITEM_H_ */

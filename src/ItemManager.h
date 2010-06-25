/*
 * ItemManagers.h
 *
 *  Created on: Jun 24, 2010
 *      Author: bryan
 */

#ifndef ITEMMANAGERS_H_
#define ITEMMANAGERS_H_
#include "Item.h"
#include <list>

class ItemManager {

        //arraylist of items
	private:
		list<Item> items;


        //default constructor which initailizes the
        //item arraylist
	public:
		ItemManager(){

		}

		~ItemManager(){

		}

        //adds an item to the arraylist of items
        void addItem(Item a);

        //adds a random item into the arraylist of items
        void addRandomItem(Item b);

        //returns the arraylits of items
        list<Item>& getItems();

        //moves each item on the board
        void move();

        //checks item collisions with the user's craft
        void checkCollisions(Airplane a);

        //draws each item of the item arraylist
        void draw(SDL_Surface* screen);

        //checks each item's visibility and them accordingly
        void check();

};
#endif /* ITEMMANAGERS_H_ */

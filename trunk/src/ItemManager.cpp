/*
 * ItemManagers.cpp
 *
 *  Created on: Jun 24, 2010
 *      Author: bryan
 */

#include "ItemManager.h"

//adds an item to the arraylist of items
void ItemManager::addItem(Item a){
	items.push_back(a);
}

//adds a random item into the arraylist of items
void ItemManager::addRandomItem(Item b){

	int chance = 0;
	int x = b.getLoc().getX();
	int y = b.getLoc().getY();

	chance = rand()%4;

	if(chance == 0){
		Item_HP a(x,y);
		items.push_back(a);
	}
	else

	if(chance == 1){
		Item_GreenLaser a(x,y);
        items.push_back(a);
	}
	else

	if(chance == 2){
		Item_BlueBullet a(x,y);
		items.push_back(a);
	}

	else

	if(chance == 3){
		Item_Missile a(x,y);
		items.push_back(a);
	}

}

list<Item>& ItemManager::getItems(){
	return items;
}


void ItemManager::move(){
	list<Item>::iterator item;

	for(item = items.begin(); item != items.end(); ++item){

		if((*item).isVisible())
			(*item).move();
	}
}

void ItemManager::checkCollisions(Airplane a){

}


void ItemManager::draw(SDL_Surface* screen){

	if( items.size() > 0 ){
		list<Item>::iterator item;

		for(item = items.begin() ; item != items.end(); ++item){

			if((*item).isVisible())
        	(*item).draw(screen);
       }

	}
}

void ItemManager::check(){
	if( items.size() > 0 ){
		list<Item>::iterator item;

		for( item = items.begin(); item != items.end(); ++item){
			if(!(*item).isVisible())
				item = items.erase(item);
		}

	}
}


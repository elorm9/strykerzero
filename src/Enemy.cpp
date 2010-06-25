/*
 * Enemy.cpp
 *
 *  Created on: Jun 24, 2010
 *      Author: bryan
 */

#include "Enemy.h"

//updates the position of the enemy
void Enemy::move() {

	int x = getLoc().getX();

	Entity::move();

	if( x <= BOARD_STARTX -60)
		setVisible(false);
}


void Enemy::missileAction(Airplane a){

  list<Projectile>::iterator missile;

  for(missile = getMissiles().begin(); missile != getMissiles().end(); missile++){

	  if((*missile).getBound().check_collision(a.getBound())){
		  (*missile).setVisible(false);
		  a.getHP().reduceHealth((*missile).getDamage());
      	  }
       	   else
       		   if((*missile).isVisible())
       			   (*missile).move();
  	  }

}

void Enemy::drawHP(SDL_Surface* screen)
{
	int x = getLoc().getX();
    int y = getLoc().getY();
    SDL_Rect hpBar;

    hpBar.x = x+25;
    hpBar.y = y;
    hpBar.h = 5;
    hpBar.w = getHP().getHealth()*2;

    SDL_FillRect(screen, &hpBar, 0x0000FF00);
}


void Enemy::attack(){
	int x = getLoc().getX();
    int y = getLoc().getY();

    eMissile a(x + CRAFT_SIZE, y + CRAFT_SIZE );
    getMissiles().push_back(a);
}

/*
 * Projectile.cpp
 *
 *  Created on: Jun 24, 2010
 *      Author: bryan
 */

#include "Projectile.h"

//update the missile's position
void Projectile::move() {
	Entity::move();

	if (getLoc().getX() > BOARD_ENDX)
		setVisible(false);
}

int Projectile::getDamage(){
	return damage;
}

//set the damage of the missile
void Projectile::setDamage(int d){
	damage = d;
}

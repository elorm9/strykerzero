/*
 * Entity.cpp
 *
 *  Created on: Jun 24, 2010
 *      Author: bryan
 */

#include "Entity.h"

Point2D& Entity::getLoc(){
	return loc;
}

Image& Entity::getImage(){
	return image;
}

Bound& Entity::getBound(){
	bound.getLoc().setX(loc.getX());
	bound.getLoc().setY(loc.getY());
	return bound;
}

void Entity::setDX(int d){
	dx = d;
}

void Entity::setDY(int d){
	dy = d;
}

void Entity::draw(SDL_Surface* screen){
	SDL_Rect rect;

	rect.x = loc.getX();
	rect.y = loc.getY();

	//Blit the surface
	SDL_BlitSurface( image.getSurface(), NULL, screen, &rect );
}

void Entity::setVisible(bool b){
	visible = b;
}

bool Entity::isVisible(){
	return visible;
}


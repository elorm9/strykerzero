/*
 * Bound.cpp
 *
 *  Created on: Jun 24, 2010
 *      Author: bryan
 */
#include "Bound.h"

int Bound::distance(int x1, int y1, int x2, int y2 ){
	return sqrt( pow(x2 - x1, 2) + pow(y2-y1, 2) );
}

Point2D& Bound::getLoc(){
	return loc;
}

void Bound::setR(int s){
	r = s;
}

int Bound::getR(){
	return r;
}

bool Bound::check_collision(Bound &B){
	int Bx = B.getLoc().getX();
	int By = B.getLoc().getY();
	int Br = B.getR();

	if( distance( loc.getX(), loc.getY(), Bx, By) < (r + Br))
		return true;
	else
		return false;
}


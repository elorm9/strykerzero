/*
 * Point2D.cpp
 *
 *  Created on: Jun 24, 2010
 *      Author: bryan
 */

#include "Point2D.h"

void Point2D::setX(int X){
	x = X;
}

int& Point2D::getX(){
	return x;
}

void Point2D::setY(int Y){
	y = Y;
}

int& Point2D::getY(){
	return y;
}

void Point2D::translate(int dx, int dy){
	x += dx;
	y += dy;
}

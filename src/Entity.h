/*
 * Entity.h
 *
 *  Created on: Jun 22, 2010
 *      Author: bryan
 */

#ifndef ENTITY_H_
#define ENTITY_H_

#include <SDL/SDL.h>
#include <string>

#include "Image.h"
#include "Point2D.h"
#include "Bound.h"

#include <iostream>
#include <cmath>


using namespace std;

const int BOARD_STARTX = -1;
const int BOARD_ENDX = 800;

const int BOARD_STARTY = 0;
const int BOARD_ENDY = 480;


class Entity{

private:
	Point2D loc;
	Image image;
	Bound bound;

	int dx;
	int dy;

	bool visible;

public:

	Entity(){
		dx = 0;
		dy = 0;
		visible = true;
	}

	~Entity(){

	}

	Entity(int X, int Y){
		loc.setX(X);
		loc.setY(Y);
		dx = 0;
		dy = 0;

		visible = true;
	}

	Point2D &getLoc();

	Image &getImage();

	Bound& getBound();

	void setDX(int d);

	void setDY(int d);

	void draw(SDL_Surface* screen);
	void setVisible(bool b);
	bool isVisible();

	virtual void move(){
		loc.translate(dx,dy);
	}


};

#endif /* ENTITY_H_ */

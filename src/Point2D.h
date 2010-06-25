/*
 * Point2D.h
 *
 *  Created on: Jun 22, 2010
 *      Author: bryan
 */

#ifndef POINT2D_H_
#define POINT2D_H_

#include <iostream>
using namespace std;

class Point2D {

private:

	//locations of the entity
	int x;
	int y;

public:
	Point2D(){
		x = 0;
		y = 0;
	}

	~Point2D(){

	}

	Point2D(int X, int Y){
		x = X;
		y = Y;
	}

	void setX(int X);

	int &getX();

	void setY(int Y);

	int &getY();

	void translate(int dx, int dy);


};

#endif /* POINT2D_H_ */

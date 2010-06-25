/*
 * Bound.h
 *
 *  Created on: Jun 23, 2010
 *      Author: bryan
 */

#ifndef BOUND_H_
#define BOUND_H_
#include "Point2D.h"
#include <cmath>
class Bound{
private:
	Point2D loc;
	int r;

	int distance(int x1, int y1, int x2, int y2);

public:
	Bound(){
		loc.setX(0);
		loc.setY(0);
		r = 0;
	}

	~Bound(){

	}

	Point2D &getLoc();

	void setR(int s);
	int getR();

	bool check_collision(Bound &B);


};

#endif /* BOUND_H_ */

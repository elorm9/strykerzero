/*
 * Background.h
 *
 *  Created on: Jun 22, 2010
 *      Author: bryan
 */

#ifndef BACKGROUND_H_
#define BACKGROUND_H_
#include "Entity.h"

class Background: public Entity{

public:
	Background():Entity(){

	}

	~Background(){
		cout <<"Background destroyed";
	}

	Background(bool b){
		setVisible(b);
		getImage().setImage("src/Images/newback.png");
		setDX(-4);
		setDY(0);

		getLoc().setX(0);
		getLoc().setY(0);
	}

	void move(){
		Entity::move();
		if(getLoc().getX() <= -1146)
			getLoc().setX(0);
	}

};

#endif /* BACKGROUND_H_ */

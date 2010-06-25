/*
 * HP.h
 *
 *  Created on: Jun 24, 2010
 *      Author: bryan
 */

#ifndef Health_H_
#define Health_H_

class Health {
private:
	//current HP
	int health;

	//highest possible HP
	int maxHealth;

public:
	Health();
	~Health();

	//reduces hp by the specified amount of damage
	void reduceHealth(int damage);

	//increase the HP
	void increaseHealth(int h);

	//set the HP
	void setHealth(int h);

	//get the HP
	int getHealth();

	//set the maximum HP
	void setMaxHealth(int h);

	//get the maximum HP
	int getMaxHealth();


};

#endif /* Health_H_ */

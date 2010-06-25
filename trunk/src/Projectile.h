/*
 * Missile.h
 *
 *  Created on: Jun 18, 2010
 *      Author: bryan
 */

#ifndef MISSILE_H_
#define MISSILE_H_

#include "Entity.h"

//standard missile class
class Projectile: public Entity{


private:
	//amount of damage that the missile delivers
	int damage;

public:

	Projectile():Entity(){}

	~Projectile(){

	}

	Projectile(int x, int y): Entity(x,y){
		setDX(2);
		setDY(0);

		setVisible(true);
		damage = 2;
	}

	//update the missile's position
	void move();

	//get the damage of the missile
	int getDamage();

	//set the damage of the missile
	void setDamage(int d);
};


//--------------Red Bullet Class-----------------------------
class RedBullet: public Projectile{


	public:
		RedBullet(int x, int y):Projectile(x,y){

			getImage().setImage("src/Images/12px-red-comet.png");
			setDX(3);
			setDY(0);
			setVisible(true);
			setDamage(3);
			getBound().setR( (getImage().getSurface()->w)/2);

		}


		RedBullet(int x, int y, int dx, int dy):Projectile(x,y){

			getImage().setImage("src/Images/12px-red-comet.png");
			setVisible(true);
			setDamage(2);
			setDX(dx);
			setDY(dy);
			getBound().setR( (getImage().getSurface()->w)/2);

		}


};

//----------------------------Missile Class ------------------------
class Missile: public Projectile {

	public:

		Missile(int x, int y):Projectile(x,y){
			getImage().setImage("src/Images/missile.png");
			setVisible(true);
			setDX(2);
			setDY(0);
			setDamage(4);
			getBound().setR( (getImage().getSurface()->w)/2);
		}

		Missile(int x, int y, int dx, int dy):Projectile(x,y){

			getImage().setImage("src/Images/missile.png");
			setVisible(true);
			setDamage(3);
			setDX(dx);
			setDY(dy);
			getBound().setR( (getImage().getSurface()->w)/2);

		}



};


//--------------------------Blue Bullet Class-----------------------
class BlueBullet: public Projectile{

   public:

	BlueBullet(int x, int y):Projectile(x,y){

		getImage().setImage("src/Images/blue2.png");

        setDX(3);
        setDY(0);
        setDamage(5);
        setVisible(true);
        getBound().setR( (getImage().getSurface()->w)/2);
	   }

	BlueBullet(int x, int y, int dx, int dy):Projectile(x,y){

		getImage().setImage("src/Images/blue2.png");
		setVisible(true);
		setDamage(3);
		setDX(dx);
		setDY(dy);
		getBound().setR( (getImage().getSurface()->w)/2);

	}


};

//--------------------------Laser Class-----------------

class Laser: public Projectile{

   public:

	Laser(int x, int y):Projectile(x,y){

		getImage().setImage("src/Images/green2.png");

		setDamage(7);
		setDX(4);
		setDY(0);
		setVisible(true);
		getBound().setR( (getImage().getSurface()->w)/2);
    }

	Laser(int x, int y, int dx, int dy):Projectile(x,y){

		getImage().setImage("src/Images/green2.png");
		setVisible(true);
		setDamage(7);

		setDX(dx);
		setDY(dy);
		getBound().setR( (getImage().getSurface()->w)/2);

	}


};

//--------------Red Bullet Class-----------------------------
class eRedBullet: public Projectile{


	public:
		eRedBullet(int x, int y):Projectile(x,y){

			getImage().setImage("src/Images/Eredbullet.png");
			setDX(3);
			setDY(0);
			setVisible(true);
			setDamage(3);
			getBound().setR( (getImage().getSurface()->w)/2);

		}


		eRedBullet(int x, int y, int dx, int dy):Projectile(x,y){

			getImage().setImage("src/Images/Eredbullet.png");
			setVisible(true);
			setDamage(3);
			setDX(dx);
			setDY(dy);
			getBound().setR( (getImage().getSurface()->w)/2);

		}


};

//----------------------------Missile Class ------------------------
class eMissile: public Projectile {

	public:

		eMissile(int x, int y):Projectile(x,y){
			getImage().setImage("src/Images/Emissile.png");
			setVisible(true);
			setDX(3);
			setDY(0);
			setDamage(4);
			getBound().setR( (getImage().getSurface()->w)/2);
		}

		eMissile(int x, int y, int dx, int dy):Projectile(x,y){

			getImage().setImage("src/Images/Emissile.png");
			setVisible(true);
			setDamage(3);
			setDX(dx);
			setDY(dy);
			getBound().setR( (getImage().getSurface()->w)/2);

		}



};


//--------------------------Blue Bullet Class-----------------------
class eBlueBullet: public Projectile{

   public:

	eBlueBullet(int x, int y):Projectile(x,y){

		getImage().setImage("src/Images/Eblue2.png");

        setDX(3);
        setDY(0);
        setDamage(5);
        setVisible(true);
        getBound().setR( (getImage().getSurface()->w)/2);
	   }

	eBlueBullet(int x, int y, int dx, int dy):Projectile(x,y){

		getImage().setImage("src/Images/Eblue2.png");
		setVisible(true);
		setDamage(3);
		setDX(dx);
		setDY(dy);
		getBound().setR( (getImage().getSurface()->w)/2);

	}


};

//--------------------------Laser Class-----------------

class eLaser: public Projectile{

   public:

	eLaser(int x, int y):Projectile(x,y){

		getImage().setImage("src/Images/green2.png");

		setDamage(7);
		setDX(4);
		setDY(0);
		setVisible(true);
		getBound().setR( (getImage().getSurface()->w)/2);
    }

	eLaser(int x, int y, int dx, int dy):Projectile(x,y){

		getImage().setImage("src/Images/green2.png");
		setVisible(true);
		setDamage(7);

		setDX(dx);
		setDY(dy);
		getBound().setR( (getImage().getSurface()->w)/2);

	}


};

#endif /* MISSILE_H_ */

/*
 * Image.h
 *
 *  Created on: Jun 23, 2010
 *      Author: bryan
 */

#ifndef IMAGE_H_
#define IMAGE_H_
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <string>

class Image{

private:
	SDL_Surface* image;


public:

	Image(){
		image = NULL;
	}

	~Image(){

	}

	SDL_Surface* & getSurface();

	void clean_up();

	void setImage(std::string filename);

};

#endif /* IMAGE_H_ */

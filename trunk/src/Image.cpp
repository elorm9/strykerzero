/*
 * Image.cpp
 *
 *  Created on: Jun 24, 2010
 *      Author: bryan
 */

#include "Image.h"

SDL_Surface* &	Image::getSurface(){
	return image;
}

void Image::clean_up(){
	SDL_FreeSurface(image);
}


void Image::setImage(std::string filename){

	//The image that's loaded
	SDL_Surface* loadedImage = NULL;

	//Load the image using SDL_image
	loadedImage = IMG_Load( filename.c_str() );

	//If the image loaded
	if( loadedImage != NULL )
	{
		//Create an optimized image
		image = SDL_DisplayFormatAlpha( loadedImage );

		//Free the old image
		SDL_FreeSurface( loadedImage );
	}
}


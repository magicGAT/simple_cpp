/*
 * animals.h
 *
 *  Created on: Dec 9, 2019
 *      Author: gregorytaylor
 */

#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>
#include <string>

using namespace std;

struct Crow
{
	string name;
	string color;
	bool cawing;
};

struct Octopus
{
	string name;
	int size;
	string color;
};

struct Slug
{
	string name;
	string color;
	bool slime;
	bool shell;
};

enum Location
{
	entrance,
	exhibit_1,
	exhibit_2,
	exhibit_3,
	leaving
};



#endif /* ANIMALS_H_ */

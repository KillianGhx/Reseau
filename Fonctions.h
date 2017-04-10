/*
 * Fonctions.h
 *
 *  Created on: 3 avr. 2017
 *      Author: ubuntu
 */

#ifndef FONCTIONS_H_
#define FONCTIONS_H_
#include "Reseau.h"

class Fonctions{
public :
	Fonctions(){};
	~Fonctions(){};
	static void poserReseau2(int sizeAp,int sizeTest);
	static void poserReseau(int sizeAp,int sizeTest);
	static void dispensableReseau(int sizeAp,int sizeTest);
	static void defaussableReseau(int sizeAp,int sizeTest);
};



#endif /* FONCTIONS_H_ */

/*
 * test.cpp
 *
 *  Created on: 28 mars 2017
 *      Author: ubuntu
 */

#include "Reseau.h"
#include <iostream>

using namespace std;

int main(){
	//NE PAS OUBLIER DE CHANGER NBCOUCHE SINON C MOR LOL
	Reseau *r = new Reseau({1,2},{1,5,-3});
	r->affiche();
	vector <double> in;
	in.push_back(1);
	in.push_back(1);
	in.push_back(1);

	r->input(in);
	r->affiche();
}



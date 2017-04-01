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
	Reseau *r = new Reseau({1,2},{1,5,-3}); // avec liste de poids

//	Reseau *r = new Reseau({1,2,2,4}); // Avec liste des couches
//	Reseau *r = new Reseau(); // Vide
	vector <double> in;
	in.push_back(0);
	in.push_back(0);
	r->input(in);
	r->enavant();
	r->affiche();



}



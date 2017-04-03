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
	double errM=0.5;
	vector <double > pds;
	for(int i=1;i<49;i++){
		pds.push_back(i);
	}
	Reseau *r = new Reseau({1,2}); // avec liste de poids

//	Reseau *r = new Reseau({1,2,2,4}); // Avec liste des couches
//	Reseau *r = new Reseau(); // Vide
	vector <double> in;
	for(int i=0;i<NBCOUCHE;i++){
		in.push_back(1);
	}

	r->getDelta2();
	cin.get();

	int i = 0;
	while (errM > 0.1) {
		errM+=r->backprop( { 0, 0 }, 0);

		errM+=r->backprop( { 0, 1 }, 1);
		errM+=r->backprop( { 1, 0 }, 1);
		errM+=r->backprop( { 1, 1 }, 1);
		errM/=4;
		cout << errM << endl;
		r->affiche();
		i++;
		cout << "Erreur moyenne : " << errM << endl;
	}

	r->getDelta2();
	cout << " FIN " << endl;


}



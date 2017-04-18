/*
 * test.cpp
 *
 *  Created on: 28 mars 2017
 *      Author: ubuntu
 */

#include "Reseau.h"
#include "Fonctions.h"
#include <iostream>

using namespace std;


int main(){


	Fonctions f;
	while(true){
	int ap,test;
	cout << "rentrer le nombre d'exemple d'aprentissage" << endl;
	cin >> ap;
//	cout << "rentrer le nombre de test" << endl;
//	cin >>test;
	f.defaussableReseau(ap,30000);
	}


//	//NE PAS OUBLIER DE CHANGER NBCOUCHE SINON C MOR LOL
//	double errM=0.5;
//	vector <double > pds;
//	for(int i=1;i<49;i++){
//		pds.push_back(i);
//	}
////	Reseau *r = new Reseau({1,2}); // avec liste de poids
//
//	Reseau *r = new Reseau({1,2,2}); // Avec liste des couches
////	Reseau *r = new Reseau(); // Vide
//	vector <double> in;
//	for(int i=0;i<NBCOUCHE;i++){
//		in.push_back(1);
//	}
//
//	r->getDelta2();
//	cout << "Entrez une touche pour reprendre !"<< endl;
//	cin.get();
//
//
//	int compteur = 0;
//	while (errM > 0.1) {
//		errM+=r->backprop( { 0, 0 }, 0);
//
//		errM+=r->backprop( { 0, 1 }, 1);
//		errM+=r->backprop( { 1, 0 }, 1);
//		errM+=r->backprop( { 1, 1 }, 0);
//		errM/=4;
//		cout << errM << endl;
//		r->affiche();
//		compteur++;
//		cout << "Erreur moyenne : " << errM << endl;
//	}
//	cout << " Fini en " << compteur << " it�ration :) "<< endl;
//
//	r->getDelta2();



}



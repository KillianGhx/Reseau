/*
 * Reseau.cpp
 *
 *  Created on: 28 mars 2017
 *      Author: ubuntu
 */
#include "Reseau.h"
#include <iostream>
#include <ctime>
#include <random>

using namespace std;

Reseau::Reseau(){

	int n;
	taille[0]=1;
	for(int i = 1; i < NBCOUCHE ; i++){
		cout << "rentrer le nombre de neurone dans la couche "+ i << endl;
		cin >> n ;
		taille[i] = n;
	}

	for (int i =0 ; i < NBCOUCHE ; i++){
		for(int j = 0 ; j < taille[i] ; j++ ){
			out[i][j] = 2;
		}
	}

}

void Reseau::input(vector<double> input){
	for(int i = 0 ; i < taille[NBCOUCHE-1];i++){
	out[NBCOUCHE-1][i]=input[i];
	}
}

void Reseau::affiche(){
	for (int i = 0;i< NBCOUCHE;i++){
		cout << "affichage de la couche " << i << " : "<< endl;
		for (int j = 0; j < taille[i];j++){
			cout << "Neurone " << i << " : " << out[i][j] << endl;
		}
	}
}

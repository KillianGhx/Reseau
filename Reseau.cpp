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
#include <cstdlib>

using namespace std;

Reseau::Reseau() {
	srand(time(NULL));
	int n;
	int nbCoucheCacher = 1;
	for (int i = 0; i < NBCOUCHE; i++) {
		if (i == 0) {
			cout << "Entrez le nombre de neurone pour la couche de sortie "
					<< endl;
		} else if ((i + 1) == NBCOUCHE) {
			cout << "Entrez le nombre de neurone pour la couche d'entrée  "
					<< endl;
		} else {
			cout << "Entrez le nombre de neurone pour la couche caché  "
					<< nbCoucheCacher << endl;
			nbCoucheCacher++;
		}
		cin >> n;
		taille[i] = n;
	}
	int index = 0;
	for (int i = 0; i < NBCOUCHE; i++) {
		for (int j = 0; j < taille[index]; j++) {
			out[i][j] = 0;
		}
		index++;
	}
	index = 0;
	for (int i = 0; i < NBCOUCHE - 1; i++) {
		for (int j = 0; j < (taille[index] * taille[index + 1] + taille[index]);j++) {
			poids[i][j] = (rand()%(1000*(BORNESUP-(BORNEINF))+1))/1000.+(BORNEINF);
		}
		index++;
	}

}

Reseau::Reseau(vector <int> in) {
	srand(time(NULL));
	int nbCoucheCacher = 1;
	for (int i = 0; i < NBCOUCHE; i++) {
		taille[i] = in.at(i);
	}
	int index = 0;
	for (int i = 0; i < NBCOUCHE; i++) {
		for (int j = 0; j < taille[index]; j++) {
			out[i][j] = 0;
		}
		index++;
	}
	index = 0;
	for (int i = 0; i < NBCOUCHE - 1; i++) {
		for (int j = 0; j < (taille[index] * taille[index + 1] + taille[index]);j++) {
			poids[i][j] = (rand()%(1000*(BORNESUP-(BORNEINF))+1))/1000.+(BORNEINF);
		}
		index++;
	}

}

Reseau::Reseau(vector <int> couche, vector <double> pds) {
	srand(time(NULL));
	int nbCoucheCacher = 1;
	for (int i = 0; i < NBCOUCHE; i++) {
		taille[i] = couche.at(i);
	}
	int index = 0;
	for (int i = 0; i < NBCOUCHE; i++) {
		for (int j = 0; j < taille[index]; j++) {
			out[i][j] = 0;
		}
		index++;
	}
	index = 0;
	int compteur=0;
	for (int i = 0; i < NBCOUCHE - 1; i++) {
		for (int j = 0; j < (taille[index] * taille[index + 1] + taille[index]);j++) {
			poids[i][j] = pds.at(compteur);
			compteur++;
		}
		index++;
	}

}

int Reseau::maxTaille() {
	int max = 0;
	for (int i = 0; i < NBCOUCHE; i++) {
		if (max < taille[i]) {
			max = taille[i];
		}
	}

	return max;
}

void Reseau::afficheT() {
	cout << "Affichage Taille : " << endl;
	for (int i = 0; i < NBCOUCHE; i++) {
		cout << "taille[" << i << "] = " << taille[i] << endl;
	}
	cout << "Affichage Output : " << endl;
	int index = 0;
	for (int i = 0; i < NBCOUCHE; i++) {
		for (int j = 0; j < taille[index]; j++) {
			cout << "output [" << i << "][" << j << "] = " << out[i][j] << endl;
		}
		index++;
	}
	index = 0;
	cout << "Affichage des poids : " << endl;
	for (int i = 0; i < NBCOUCHE - 1; i++) {
		for (int j = 0; j < (taille[index] * taille[index + 1] + taille[index]);
				j++) {
			cout << "poids [" << i << "][" << j << "] = " << poids[i][j]
					<< endl;
		}
		index++;
	}

}

void Reseau::input(vector<double> input) {
	for (int i = 0; i < taille[NBCOUCHE - 1]; i++) {
		out[NBCOUCHE - 1][i] = input[i];
	}
}

void Reseau::affiche() {
	//Ca marche mais je sais pas pkoi lol
	cout << endl;
	int indexT = 0;
	int nbCC = 1;
	int index = 0;
	int indexCouche = 1;
	int indexPds=1;
	int indexPds2=0;
	cout << "Affichage du reseau de neurone : " << endl;
	cout << "Nombre de couche : " << NBCOUCHE << endl;
	for (int i = 0; i < NBCOUCHE; i++) {
		if (i == 0) {
			cout << "Nombre de neurone dans la couche de sortie : "
					<< taille[indexT] << endl;
			indexT++;
			int indexX=0;
			for (int j = 0; j < indexCouche; j++) {
				for (int k = 0; k < taille[index]; k++) {
					cout << "Valeur du neurone : " << out[j][k] << endl;
					for(int h=0;h < indexPds ; h++){
						for(int g = 0; g < taille[indexPds2+1]+1; g++){
							if (g==0){
								cout << "Valeur du biais : " << poids[h][indexX] << ", valeurs des poids : ";
								indexX++;
							}else{
								cout << poids[h][indexX] << " " ;
								indexX++;
							}

						}
						cout << endl;
					}
				}
			}
			index++;
			indexCouche++;
			indexPds2++;
			indexPds++;
		} else if ((i + 1) == NBCOUCHE) {
			cout << "Nombre de neurone dans la couche d'entre : "
					<< taille[indexT] << endl;
			indexT++;
			for (int j = indexCouche-1; j < indexCouche; j++) {
				for (int k = 0; k < taille[index]; k++) {
					cout << "Valeur du neurone : " << out[j][k] << endl;

				}
			}
			index++;
			indexCouche++;
		} else {
			cout << "Nombre de neurone dans la couche cache  " << nbCC << " : "
					<< taille[indexT] << endl;
			indexT++;
			nbCC++;
			int indexX=0;
			for (int j = indexCouche-1; j < indexCouche; j++) {
				for (int k = 0; k < taille[index]; k++) {
					cout << "Valeur du neurone : " << out[j][k] << endl;
					for(int h=indexPds-1;h < indexPds ; h++){
						for(int g = 0; g < taille[indexPds2+1]+1; g++){
							if(g==0){
								cout << "Valeur du biais : " << poids[h][indexX] << ", valeurs des poids : ";
								indexX++;
							}else{
								cout << poids[h][indexX] << " " ;
								indexX++;
							}

						}
						cout << endl;
					}

				}
			}
			index++;
			indexCouche++;
			indexPds2++;
			indexPds++;
		}
	}

}

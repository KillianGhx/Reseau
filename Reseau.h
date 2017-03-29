/*
 * Reseau.h
 *
 *  Created on: 28 mars 2017
 *      Author: ubuntu
 */

#ifndef RESEAU_H_
#define RESEAU_H_
#define NBCOUCHE 2
#include <vector>
#define BORNESUP 1
#define BORNEINF -1
using namespace std;


class Reseau{

private :
	int taille[NBCOUCHE];
	double out[NBCOUCHE][40];
	double poids[NBCOUCHE-1][40];
	double signal[NBCOUCHE-1][40];

public :
	Reseau();
	~Reseau();
	Reseau(vector <int> cou);
	Reseau(vector <int> couche, vector <double> pds);
	void affiche();
	void afficheT();
	void input(vector<double> input);
	void enavant(){};
	void enariere(){};
	int maxTaille();

};



#endif /* RESEAU_H_ */

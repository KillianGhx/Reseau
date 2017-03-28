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
using namespace std;


class Reseau{

private :
	int taille[NBCOUCHE] = {2,1};
	double out[NBCOUCHE][40];
	double poids[NBCOUCHE-1][40];
	double signal[NBCOUCHE-1][40];

public :
	Reseau();
	~Reseau();
	void affiche();
	void input(vector<double> input);
	void enavant(){};
	void enariere(){};

};



#endif /* RESEAU_H_ */

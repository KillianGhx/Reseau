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
#define MAX 40
using namespace std;


class Reseau{

private :
	int taille[NBCOUCHE];
	double out[NBCOUCHE][MAX];
	double poids[NBCOUCHE-1][MAX];
	double signal[NBCOUCHE-1][MAX];

public :
	Reseau();
	~Reseau();
	Reseau(vector <int> cou);
	Reseau(vector <int> couche, vector <double> pds);
	void affiche();
	void afficheT();
	void input(vector<double> input);
	void enavant();
	void enariere(){};
	int maxTaille();
	double sigmoide(double);


};



#endif /* RESEAU_H_ */

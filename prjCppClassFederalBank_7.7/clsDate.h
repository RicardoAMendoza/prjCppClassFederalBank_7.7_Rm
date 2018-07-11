#pragma once
#include<iostream>
#include<string>
using namespace std;


class clsDate {
	//attributes
private:
	int vJour, vMois, vAnnee;

	//contructeur
public:
	clsDate(int Jour, int Mois, int Annee);
	clsDate();
	~clsDate();

	//accessoires aux propietes
public:
	int getJour();
	void setJour(int Jour);

	int getMois();
	void setMois(int Mois);

	int getAnnee();
	void setAnnee(int Annee);

	//methodes
	void Initialiser(int Jour, int Mois, int Annee);
	void Afficher();
};


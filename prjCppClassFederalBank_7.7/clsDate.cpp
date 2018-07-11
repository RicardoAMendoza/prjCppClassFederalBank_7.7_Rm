#pragma once
#include<iostream>
#include<string>
#include "clsDate.h"
using namespace std;


//contructeur
clsDate::clsDate(int Jour, int Mois, int Annee) {
	setJour(Jour);
	setMois(Mois);
	setAnnee(Annee);
}
clsDate::clsDate() {
	vJour = vMois = vAnnee = 1;
}
clsDate::~clsDate() {}

//accessoires aux propietes
int clsDate::getJour() {
	return vJour;
}
void clsDate::setJour(int Jour) {
	vJour = (Jour >= 1 && Jour <= 31) ? Jour : 1;
}
int clsDate::getMois() {
	return vMois;
}
void clsDate::setMois(int Mois) {
	vMois = (Mois >= 1 && Mois <= 12) ? Mois : 1;
}

int clsDate::getAnnee() {
	return vAnnee;
}
void clsDate::setAnnee(int Annee) {
	vAnnee = (Annee > 0) ? Annee : 1;
}

//methodes
void clsDate::Initialiser(int Jour, int Mois, int Annee) {
	setJour(Jour);
	setMois(Mois);
	setAnnee(Annee);
}
void clsDate::Afficher() {
	cout << "\n\t Date : " << vJour << "/" << vMois << "/" << vAnnee << endl;
}

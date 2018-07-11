#pragma once
#include<iostream>
#include<string>
#include"clsDate.h"
#include "clsCompte.h"
using namespace std;

//constructeurs
clsCompte::clsCompte(string Numero, string Type, int Jour, int Mois, int Annee, float Solde) {
	setNumero(Numero);
	setType(Type);
	vDate = clsDate(Jour, Mois, Annee);
	setSolde(Solde);
}
clsCompte::clsCompte(string Numero, string Type, int Jour, int Mois, int Annee) {
	setNumero(Numero);
	setType(Type);
	vDate = clsDate(Jour, Mois, Annee);
}
clsCompte::clsCompte(string Numero, string Type, float Solde) {
	setNumero(Numero);
	setType(Type);
	setSolde(Solde);
}

clsCompte::clsCompte() {
	vNumero = "No defini";
	vType = "No defini";
	vDate = clsDate();
	vSolde = 0.0;
}
clsCompte::~clsCompte() {
}
//accessoires aux propriétés
string clsCompte::getNumero() {
	return vNumero;
}
void clsCompte::setNumero(string Numero) {
	vNumero = Numero;
}
string clsCompte::getType() {
	return vType;
}
void clsCompte::setType(string Type) {
	vType = Type;
}
clsDate clsCompte::getDate() {
	return vDate;
}
void clsCompte::setDate(clsDate Date) {
	vDate = Date;
}
float clsCompte::getSolde() {
	return vSolde;
}
void clsCompte::setSolde(float Solde) {
	vSolde = Solde;
}

//methodes
// 1 )
void clsCompte::Ouvrir(string Numero, string Type, clsDate Date, float Solde) {
	setNumero(Numero);
	setType(Type);
	setDate(Date);
	vSolde = 0.0;
}
// 2 )
bool clsCompte::Deposer(float Montant, float Solde) {
	if (Montant < 20 || Montant > 5000) {
		return false;
	}
	else {
		vSolde += Montant;
	}
}
// 3 )
void clsCompte::Consulter(string Numero, string Type, clsDate Date, float Solde) {
	cout << "\n\t Numero : " << getNumero() << endl;
	cout << "\n\t Type : " << getType() << endl;
	cout << "\n\t Date : " << endl;
}
// 4)
int clsCompte::Retirer(int Montant, float Solde) {
	if (Montant > 500) {
		return -2;
	}
	else if (Montant < 20) {
		return -1;
	}
	else if (Montant > Solde) {
		return 1;
	}
}

void clsCompte::Afficher() {
	cout << "\n\t ___________________\n";
	cout << "\n\t Numero de Numero : " << getNumero() << endl;
	cout << "\n\t Nom de Type : " << getType() << endl;
	cout << "\n\t Telephone de Solde : " << getSolde() << endl;
	cout << endl; getDate().Afficher(); cout << endl;
}
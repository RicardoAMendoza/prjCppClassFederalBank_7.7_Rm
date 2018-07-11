#pragma once
#include<iostream>
#include<string>
#include"clsDate.h"
using namespace std;

class clsCompte {

	//attributes
private:
	string vNumero;
	string vType;
	clsDate vDate;
	float vSolde;

	//constructeurs
public:
	clsCompte(string Numero, string Type, int jour, int mois, int Annee, float Solde);
	clsCompte(string Numero, string Type, int jour, int mois, int Annee);
	clsCompte(string Numero, string Type, float Solde);
	clsCompte();
	~clsCompte();

	//accessoires aux propriétés
public:
	string getNumero();
	void setNumero(string Numero);

	string getType();
	void setType(string Type);

	float getSolde();
	void setSolde(float Solde);

	clsDate getDate();
	void setDate(clsDate Date);

	//methodes
	void Ouvrir(string Numero, string Type, clsDate Date, float Solde);
	bool Deposer(float Montant, float Solde);
	void Consulter(string Numero, string Type, clsDate Date, float Solde);
	int Retirer(int Montant, float Solde);

	void Afficher();
};
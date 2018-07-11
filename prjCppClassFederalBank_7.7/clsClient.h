#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"clsListeComptes.h"
using namespace std;
using std::vector;

/*
El Viejo!
*/
class clsClient {
	//attributes
private:
	string vNumero;
	string vNom;
	string vNip;
	string vTel;
	clsListeComptes vComptes;

	//constructeur
public:
	clsClient(string Numero, string Nom, string Nip, string Tel, clsListeComptes Comptes);
	clsClient(string Numero, string Nom, string Nip, string Tel);
	clsClient();
	~clsClient();

	//accessoires aux propietes	
public:
	string getNumero();
	void setNumero(string Numero);

	string getNom();
	void setNom(string Nom);

	string getNip();
	void setNip(string Nip);

	string getTel();
	void setTel(string Tel);

	clsListeComptes getComptes();
	void setComptes(clsListeComptes Comptes);

	//methodes
public:
	void Creer(string Numero, string Nom, string Nip, string Tel, clsListeComptes Comptes);
	void clsCreersanCompte(string Numero, string Nom, string Nip, string Tel);
	void Afficher();
};

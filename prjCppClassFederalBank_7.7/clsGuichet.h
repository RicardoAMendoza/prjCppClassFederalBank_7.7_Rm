#pragma once
#include<iostream>
#include<string>
#include"clsListeClients.h"
//#include"clsClient.h"
#include<vector>
using std::vector;
using namespace std;
/*
El Viejo!
*/

class clsGuichet {

	//attributes
private:
	string vNumero;
	string vCompagnie;
	clsListeClients vClients;

	//constructeur
public:
	clsGuichet(string Numero, string Compagnie, clsListeClients Clients);
	clsGuichet(string Numero, string Compagnie);
	clsGuichet();
	~clsGuichet();

	//accesoires oux propietes
public:
	string getNuemero();
	void setNumero(string Numero);

	string getCompagnie();
	void setCompagnie(string Compagnie);

	clsListeClients getClients();
	void setClients(clsListeClients Clients);

	//methodes
public:
	void Ouvrir(string Numero, string compagnie, clsListeClients Clients);
	void Ramplir(float Montant);
	void Afficher();
};
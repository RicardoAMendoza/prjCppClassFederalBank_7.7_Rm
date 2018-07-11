#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"clsClient.h"
using namespace std;
using std::vector;
/*
El viejo
*/
class clsListeClients {
	//attributes
	vector<clsClient> maListeClient;

	//constructeurs
public:
	clsListeClients();
	~clsListeClients();

	//accessoires aux propietes
public:
	int getNombre();

	//methodes
public:
	// 1 )
	bool Exister(string Numero);
	// 2 )
	bool Ajouter(clsClient Client);
	// 3 )
	bool Supprimir(string Numero);
	// 4 )
	clsClient* Trouver(string Numero);
	// 5 )
	void Afficher();
};
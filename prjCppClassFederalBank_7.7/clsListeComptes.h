#pragma once
#include<iostream>
#include<vector>
#include"clsCompte.h"
using namespace std;
using std::vector;

class clsListeComptes {
	vector<clsCompte> maListeCompte;

public:
	clsListeComptes();
	~clsListeComptes();

public:
	//accesoires oux propietes
	int getNombre();

	//methodes
	bool Exister(string Numero);
	bool Ajouter(clsCompte Compte);
	bool Supprimir(string Numero);

	clsCompte* Trouver(string Numero);

	void Afficher();
};
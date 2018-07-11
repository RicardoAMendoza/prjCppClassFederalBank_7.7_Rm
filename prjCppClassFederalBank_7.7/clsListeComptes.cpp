#pragma once
#include<iostream>
#include<vector>
#include"clsCompte.h"
using namespace std;
using std::vector;
#include "clsListeComptes.h"
/*
El viejo
*/
clsListeComptes::clsListeComptes() {}

clsListeComptes::~clsListeComptes() {}

//accessoires aux propietes
int clsListeComptes::getNombre() {
	return maListeCompte.size();
}

//methodes
// 1 )
bool clsListeComptes::Supprimir(string Numero) {
	for (int j = 0; j < maListeCompte.size(); j++) {
		if (maListeCompte[j].getNumero() == Numero) {
			maListeCompte.erase(maListeCompte.begin() + j);
			return true;
		}
	}
	return false;
}
// 2 )
bool clsListeComptes::Exister(string Numero) {
	for (int j = 0; j < maListeCompte.size(); j++) {
		if (maListeCompte[j].getNumero() == Numero) {
			return true;
		}
	}
	return false;
}
// 3 )
bool clsListeComptes::Ajouter(clsCompte unCompte) {
	if (Exister(unCompte.getNumero())) {
		return false;
	}
	else {
		maListeCompte.push_back(unCompte);
		return true;
	}
}
// 4 )
clsCompte* clsListeComptes::Trouver(string Numero) {
	for (int j = 0; j < maListeCompte.size(); j++) {
		if (maListeCompte[j].getNumero() == Numero) {
			return &maListeCompte[j];
		}
	}
	return NULL;
}
// 5 )
void clsListeComptes::Afficher() {
	for (int j = 0; j < maListeCompte.size(); j++) {
		maListeCompte[j].Afficher();
	}
}

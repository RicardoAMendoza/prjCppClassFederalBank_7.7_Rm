#pragma once
#include<iostream>
#include<string>
#include"clsGuichet.h"
#include "fonctions.h"
using namespace std;

void TitreAvecMinuscules(char mainTitre[]);


int afficherMenuPrincipal() {
	char mainTitre[] = "Menu Principal";
	TitreAvecMinuscules(mainTitre);
	int choix = 0;

	cout << "\n\t ( 1 ) Creer un Guichet " << endl;
	cout << "\n\t ( 2 ) Ajouter un client / comptes " << endl;
	cout << "\n\t ( 3 ) Trouver un client / comptes " << endl;
	cout << "\n\t ( 4 ) Suprimir un client / comptes " << endl;
	cout << "\n\t ( 5 ) Afficher tous les clients / comptes " << endl;
	cout << "\n\t ( 6 )  Quitter  " << endl;


	cout << "\n\t Entrez votre choix ( 1 - 6 ) : "; cin >> choix;
	cout << endl << endl;

	return choix;
}

int afficherMenudeComptes() {

	int escoja = 0;
	cout << "\n\t ( 1 ) Ajouter Compte Credit " << endl;
	cout << "\n\t ( 2 ) Ajouter Compte Cheques " << endl;
	cout << "\n\t ( 3 ) Ajouter Compte Epargne " << endl;
	cout << "\n\t Entrez votre choix ( 1 - 3 ) : "; cin >> escoja;
	cout << endl << endl;

	return escoja;
}

void TitreAvecMinuscules(char unTitre[]) {
	cout << "\n\n\t\t\t";
	for (int j = 0; j < strlen(unTitre); j++) {
		char c;
		c = unTitre[j];
		/*if (islower(c)) {
		c = toupper(c);
		}*/
		cout << c;
	}
	cout << endl;
	cout << "\t\t\t";
	for (int j = 0; j < strlen(unTitre); j++) {
		cout << "_";
	}
	cout << endl << endl;
}

void afficherUnTitre(char unTitre[]) {
	cout << "\n\t\t\t";
	char c;
	for (int j = 0; j < strlen(unTitre); j++) {
		c = unTitre[j];
		if (islower(c)) {
			c = toupper(c);
		}
		cout << c;
	}
	cout << endl;
	cout << "\t\t\t";
	for (int j = 0; j < strlen(unTitre); j++) {
		cout << "_";
	}
	cout << endl << endl;
}

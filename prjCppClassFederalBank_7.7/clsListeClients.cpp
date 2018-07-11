#include<iostream>
#include<string>
#include<vector>
#include"clsClient.h"
#include "clsListeClients.h"
using namespace std;
using std::vector;


clsListeClients::clsListeClients() {
}

clsListeClients::~clsListeClients() {
}

bool clsListeClients::Exister(string Numero) {
	for (int j = 0; j < maListeClient.size(); j++) {
		if (maListeClient[j].getNumero() == Numero) {
			return true;
		}
	}
	return false;
}

bool clsListeClients::Ajouter(clsClient unClient) {
	if (Exister(unClient.getNumero())) {
		return false;
	}
	else {
		maListeClient.push_back(unClient);
		//return true;
	}
}

bool clsListeClients::Supprimir(string Numero) {
	for (int j = 0; j < maListeClient.size(); j++) {
		if (maListeClient[j].getNumero() == Numero) {
			maListeClient.erase(maListeClient.begin() + j);
			return true;
		}
	}
	return false;
}

clsClient* clsListeClients::Trouver(string Numero) {
	for (int j = 0; maListeClient.size(); j++) {
		if (maListeClient[j].getNumero() == Numero) {
			return &maListeClient[j];
		}
		return NULL;
	}
}

void clsListeClients::Afficher() {
	for (int j = 0; j < maListeClient.size(); j++) {
		maListeClient[j].Afficher();
	}
}

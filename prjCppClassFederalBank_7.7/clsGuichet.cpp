#include "clsGuichet.h"
/*
El Viejo!
*/

//constructeur
clsGuichet::clsGuichet(string Numero, string Compagnie, clsListeClients Clients) {
	setNumero(Numero);
	setCompagnie(Compagnie);
	setClients(Clients);
}
clsGuichet::clsGuichet(string Numero, string Compagnie) {
	setNumero(Numero);
	setCompagnie(Compagnie);
}
clsGuichet::clsGuichet() {
	vNumero = "Non defini";
	vCompagnie = "Non defini";
	vClients = clsListeClients();
}
clsGuichet::~clsGuichet() {}

//accesoires oux propietes
string clsGuichet::getNuemero() {
	return vNumero;
}
void clsGuichet::setNumero(string Numero) {
	vNumero = Numero;
}
string clsGuichet::getCompagnie() {
	return vCompagnie;
}
void clsGuichet::setCompagnie(string Compagnie) {
	vCompagnie = Compagnie;
}

clsListeClients clsGuichet::getClients() {
	return vClients;
}
void clsGuichet::setClients(clsListeClients Clients) {
	vClients = Clients;
}

//methodes
void clsGuichet::Ouvrir(string Numero, string Compagnie, clsListeClients Clients) {
	setNumero(Numero);
	setCompagnie(Compagnie);
	setClients(Clients);
}
void clsGuichet::Afficher() {
	cout << "\n\t Numero :" << getNuemero() << endl;
	cout << "\n\t Compagnie : " << getCompagnie() << endl;
	cout << "\n\t Clients : " << endl;
	getClients().Afficher(); cout << endl;
}

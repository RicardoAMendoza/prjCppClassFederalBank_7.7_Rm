#include "clsClient.h"
#include "clsListeComptes.h"

/*
El Viejo!
*/

//constructeur
clsClient::clsClient(string Numero, string Nom, string Nip, string Tel, clsListeComptes Comptes) {
	setNumero(Numero);
	setNom(Nom);
	setTel(Nip);
	setTel(Tel);
	setComptes(Comptes);
}
clsClient::clsClient(string Numero, string Nom, string Nip, string Tel) {
	setNumero(Numero);
	setNom(Nom);
	setTel(Tel);
}
clsClient::clsClient() {
	vNumero = "No defini";
	vNom = "No defini";
	vTel = "No defini";
	vComptes = clsListeComptes();
}
clsClient::~clsClient() {}

//accessoires aux propietes	
string clsClient::getNumero() {
	return vNumero;
}
void clsClient::setNumero(string Numero) {
	vNumero = Numero;
}
string clsClient::getNom() {
	return vNom;
}
void clsClient::setNom(string Nom) {
	vNom = Nom;
}
string clsClient::getNip() {
	return vNip;
}
void clsClient::setNip(string Nip) {
	vNip = Nip;
}
string clsClient::getTel() {
	return vTel;
}
void clsClient::setTel(string Tel) {
	vTel = Tel;
}
clsListeComptes clsClient::getComptes() {
	return vComptes;
}
void clsClient::setComptes(clsListeComptes Comptes) {
	vComptes = Comptes;
}

//methodes
void clsClient::Creer(string Numero, string Nom, string Nip, string Tel, clsListeComptes Comptes) {

	setNumero(Numero);
	setNom(Nom);
	setNip(Nip);
	setTel(Tel);
	setComptes(Comptes);
}
void clsClient::clsCreersanCompte(string Numero, string Nom, string Nip, string Tel) {

	setNumero(Numero);
	setNom(Nom);
	setNip(Nip);
	setTel(Tel);
}

void clsClient::Afficher() {
	cout << "\n\t ___________________\n";
	cout << "\n\t Numero de Client " << getNumero() << endl;
	cout << "\n\t Nom de Client " << getNom() << endl;
	cout << "\n\t Telephone de Client " << getTel() << endl;
	cout << endl; getComptes().Afficher(); cout << endl;
}
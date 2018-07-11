#include<iostream>
#include<string>
#include "clsDate.h"
#include "clsCompte.h"
#include "clsClient.h"
#include "clsGuichet.h"
#include "fonctions.h"
using namespace std;

void afficherUnTitre(char unTitre[]);
void afficherUnTitreAvecMinuscule(char TitreCreerUnGuichet[]);
void TitreAvecMinuscules(char AfficherAjouterlesClients[]);
void TitreAvecMinuscules(char titreAjouterClient[]);
void TitreAvecMinuscules(char titreAjouterCompte[]);
void TitreAvecMinuscules(char TrouverUnClient[]);
void TitreAvecMinuscules(char SupprimirUnClient[]);
void TitreAvecMinuscules(char titreAjouterClient[]);
void TitreAvecMinuscules(char AfficherlesCLients[]);

int afficherMenuPrincipal();
int afficherMenudeComptes();

void main() {

	char unTitre[] = "federal-bank";
	afficherUnTitre(unTitre);

	string gNumero, gCompagnie;
	int NbClients;
	string cNumero, cNom, cNip, cTel;
	clsListeClients listClients;
	clsListeComptes listComptes;
	clsListeClients listeClients;
	clsListeComptes listeComptes;

	int choix = 0;
	do {
		switch (choix = afficherMenuPrincipal()) {
		case 1: {
			//( 1 ) Creer un Guichet
			char TitreCreerUnGuichet[] = "Creer Un Guichet";
			TitreAvecMinuscules(TitreCreerUnGuichet);

			int autreCompte;
			bool ref = true;
			cout << "\n\t ______________________ " << endl << endl;
			cout << "\n\t GUICHET " << endl;
			cout << "\n\t Entrez Numero de Guichet : "; cin >> gNumero;
			cout << "\n\t Entrez le Nom du Bank : "; cin >> gCompagnie;

			char AfficherAjouterlesClients[] = "Ajouter les Clients";
			TitreAvecMinuscules(AfficherAjouterlesClients);


			cout << "\n\t ______________________ " << endl << endl;
			cout << "\n\t CLIENT DU BANK " << endl;;
			cout << "\n\t Entrez le Nombre Des Clients : "; cin >> NbClients;

			for (int j = 1; j <= NbClients; j++) {
				cout << "\n\t Client : " << j << endl;
				cout << "\n\t Numero de Client : "; cin >> cNumero;
				cout << "\n\t Nom de Client: "; cin >> cNom;
				cout << "\n\t NIP de Client : "; cin >> cNip;
				cout << "\n\t Tel de Client : "; cin >> cTel;
				cout << "\n\t ______________________ " << endl << endl << endl;

				do {
					string ctNumero, ctType;
					float Solde;
					int Jour, Mois, Annee;


					int escoja = 0;
					char titreAjouterCompte[] = "Ajouter une Compte";
					TitreAvecMinuscules(titreAjouterCompte);

					cout << "\n\t\t Entrez le Numero de Compte : "; cin >> ctNumero;
					escoja = afficherMenudeComptes();

					if (escoja == 1) {
						cout << "\n\t __________________________________________ " << endl;
						cout << "\n\t COMPTE DE CREDIT : " << endl;
						ctType = "Credit";
					}
					if (escoja == 2) {
						cout << "\n\t __________________________________________ " << endl;
						cout << "\n\t COMPTE DE CHEQUES : " << endl;
						ctType = "Cheques";
					}
					if (escoja == 3) {
						cout << "\n\t __________________________________________ " << endl;
						cout << "\n\t COMPTE DE EPARGNE : " << endl;
						ctType = "Epargne";
					}

					cout << "\n\t\t Entrez le Jour : "; cin >> Jour;
					cout << "\n\t\t Entrez le Mois : "; cin >> Mois;
					cout << "\n\t\t Entrez le Anne : "; cin >> Annee;
					cout << "\n\t\t Entrez le Solde de Compte : "; cin >> Solde;

					clsCompte unTemp(ctNumero, ctType, Jour, Mois, Annee, Solde);

					listComptes.Ajouter(unTemp);
					do {
						cout << "\n\t\t Ajouter autre compte ?  oui-> 1, non->2 : "; cin >> autreCompte;
					} while (autreCompte < 1 || autreCompte>2);
					if (autreCompte == 2) {
						ref = false;
					}
				} while (ref == true);

				//clsClient client2("c2c2", "Ricardo", "omni", "5148135544", listeCompte2);
				clsClient ctmp(cNumero, cNom, cNip, cTel, listComptes);
				listClients.Ajouter(ctmp);
			}

			clsGuichet Guichet(gNumero, gCompagnie, listClients);
		}
				continue;
		case 2: {
			//( 2 ) Ajouter un client / comptes
			char titreAjouterClient[] = "Ajouter une Client";
			TitreAvecMinuscules(titreAjouterClient);

			int otraCuenta;
			bool refi = true;

			string GNumero, GCompagnie;
			int NbClientes;
			string CNumero, CNom, CNip, CTel;
			clsListeClients listeClients;
			clsListeComptes listeComptes;

			cout << "\n\t ______________________ " << endl << endl;
			cout << "\n\t CLIENT DU BANK " << endl;;

			cout << "\n\t Numero de Client : "; cin >> CNumero;
			cout << "\n\t Nom de Client: "; cin >> CNom;
			cout << "\n\t NIP de Client : "; cin >> CNip;
			cout << "\n\t Tel de Client : "; cin >> CTel;
			cout << "\n\t ______________________ " << endl << endl << endl;

			do {
				string CtNumero, CtType;
				float sSolde;
				int sJour, sMois, sAnnee;


				int escoja = 0;
				char titreAjouterCompte[] = "Ajouter une Compte";
				TitreAvecMinuscules(titreAjouterCompte);

				cout << "\n\t\t Entrez le Numero de Compte : "; cin >> CtNumero;
				escoja = afficherMenudeComptes();

				if (escoja == 1) {
					cout << "\n\t __________________________________________ " << endl;
					cout << "\n\t COMPTE DE CREDIT : " << endl;
					CtType = "Credit";
				}
				if (escoja == 2) {
					cout << "\n\t __________________________________________ " << endl;
					cout << "\n\t COMPTE DE CHEQUES : " << endl;
					CtType = "Cheques";
				}
				if (escoja == 3) {
					cout << "\n\t __________________________________________ " << endl;
					cout << "\n\t COMPTE DE EPARGNE : " << endl;
					CtType = "Epargne";
				}

				cout << "\n\t\t Entrez le Jour : "; cin >> sJour;
				cout << "\n\t\t Entrez le Mois : "; cin >> sMois;
				cout << "\n\t\t Entrez le Anne : "; cin >> sAnnee;
				cout << "\n\t\t Entrez le Solde de Compte : "; cin >> sSolde;

				clsCompte unCTemp(CtNumero, CtType, sJour, sMois, sAnnee, sSolde);

				listeComptes.Ajouter(unCTemp);
				do {
					cout << "\n\t\t Ajouter autre compte ?  oui-> 1, non->2 : "; cin >> otraCuenta;
				} while (otraCuenta < 1 || otraCuenta>2);
				if (otraCuenta == 2) {
					refi = false;
				}
			} while (refi == true);

			//clsClient client2("c2c2", "Ricardo", "omni", "5148135544", listeCompte2);
			clsClient Ctmp(CNumero, CNom, CNip, CTel, listeComptes);
			listeClients.Ajouter(Ctmp);

		}
				continue;
		case 3: {
			//( 3 )Trouver un client / comptes
			char TrouverUnClient[] = "Trouver Un Client";
			TitreAvecMinuscules(TrouverUnClient);

			string Numero;
			cout << "\n\t Entrez le Numero dClient >> "; cin >> Numero;

			listClients.Trouver(Numero);
			listClients.Afficher();

		}
				continue;
		case 4: {
			//( 4 )  Suprimir un client / comptes
			char SupprimirUnClient[] = "Supprimir Un Etudiant";
			TitreAvecMinuscules(SupprimirUnClient);

			string sNumero;
			cout << "\n\t Entrez le Numero dClient a supprimir >> "; cin >> sNumero;
			if (listClients.Supprimir(sNumero) == true) {
				cout << "\n\t\t LE CLIENT EST SUPPRIME " << endl;
			}
			else
			{
				cout << "\n\t\t LE CLIENT nEST PAS SUPPRIME " << endl;
			}
		}
				continue;
		case 5: {
			//( 5 ) Afficher tous les clients / comptes
			char AfficherlesCLients[] = "Afficher Les Clients";
			TitreAvecMinuscules(AfficherlesCLients);

			cout << "\n\t ______________________ " << endl << endl;
			clsGuichet gtmp(gNumero, gCompagnie, listClients);
			gtmp.Afficher();
			cout << "\n\t ______________________ " << endl << endl;
		}
				continue;
		case 6:
			//( 6 ) Quitter
			cout << "\n\t ( 6 ) Quitter " << endl;

			continue;
		}
	} while (choix != 6);

	system("pause");
}
#pragma once

#include <memory>
#include <iostream>

enum Sexe : unsigned char {
	INCONNUE = 0U,
	MASCULIN = 1U,
	FEMININ = 2U
};

struct Personne {
	int numero;
	char nom[10];
	Sexe sexe;
};

std::unique_ptr<Personne> creer_personne();
void detruire_personne(Personne& p);
void initialiser_personne(Personne& p, const int &numero, const char (&nom)[10], const Sexe &sexe);
void afficher_personne(const Personne& p);
const char * nom_personne(const Personne& p);
Sexe sexe_personne(const Personne& p);
int numero_personne(const Personne& p);

void Test_Fonction();
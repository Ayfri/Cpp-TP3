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
	std::string nom;
	Sexe sexe;
};

std::unique_ptr<Personne> creer_personne();
void detruire_personne(Personne& p);
void initialiser_personne(Personne& p, const int &numero, const std::string& nom, const Sexe &sexe);
void afficher_personne(const Personne& p);
const std::string *nom_personne(const Personne& p);
Sexe sexe_personne(const Personne& p);
int numero_personne(const Personne& p);

void Test_Fonction();
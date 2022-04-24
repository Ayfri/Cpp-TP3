#pragma once

#include <memory>
#include <iostream>

enum Sexe : unsigned char {
	INCONNU = 0U,
	MASCULIN = 1U,
	FEMININ = 2U
};

static constexpr auto sexe_to_string(const Sexe &sexe);

struct Personne {
	unsigned long long numero;
	std::string nom;
	Sexe sexe;
};

static std::unique_ptr<Personne> creer_personne();
static void detruire_personne(std::unique_ptr<Personne>& p);
static void initialiser_personne(const std::unique_ptr<Personne> & p, const unsigned long long &numero, const std::string& nom, const Sexe &sexe);
static void afficher_personne(const std::unique_ptr<Personne>& p);
static std::string nom_personne(const std::unique_ptr<Personne>& p);
static Sexe sexe_personne(const std::unique_ptr<Personne>& p);
static unsigned long long numero_personne(const std::unique_ptr<Personne>& p);

void Test_Fonction();
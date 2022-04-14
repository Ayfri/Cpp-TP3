#include "ex2.hpp"

std::unique_ptr<Personne> creer_personne() {
	return std::make_unique<Personne>();
}

void detruire_personne(Personne &p) {
	p.~Personne();
}

void initialiser_personne(Personne &p, const int &numero, const char (&nom)[10], const Sexe &sexe) {
	p.numero = numero;
	p.sexe = sexe;
	std::move(&(*nom), nom + sizeof(nom), &(*p.nom));
}

void afficher_personne(const Personne &p) {
	std::cout << "Personne " << p.numero << " : " << *p.nom << " (" << p.sexe << ")" << std::endl;
}

const char *nom_personne(const Personne &p) {
	return p.nom;
}

Sexe sexe_personne(const Personne &p) {
	return p.sexe;
}

int numero_personne(const Personne &p) {
	return p.numero;
}

void Test_Fonction() {
	const auto p = creer_personne();
	constexpr char name[10] = "toto";
	initialiser_personne(*p, 1, name, Sexe::MASCULIN);
	afficher_personne(*p);
	std::cout << "Nom : " << nom_personne(*p) << '\n';
	std::cout << "Sexe : " << sexe_personne(*p) << '\n';
	std::cout << "Numero : " << numero_personne(*p) << '\n';
	detruire_personne(*p);
}
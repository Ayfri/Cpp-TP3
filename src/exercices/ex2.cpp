#include "ex2.hpp"

static constexpr auto sexe_to_string(const Sexe &sexe) {
	switch (sexe) {
		case Sexe::FEMININ:
			return "Féminin";
		case Sexe::MASCULIN:
			return "Masculin";
		default:
			return "Inconnu";
	}
}

static std::unique_ptr<Personne> creer_personne() {
	return std::make_unique<Personne>();
}

static void detruire_personne(std::unique_ptr<Personne> &p) {
	if (!p) throw std::invalid_argument("Pointeur null");
	
	p = nullptr;
	
	std::cout << "Personne détruite." << '\n';
}

static void initialiser_personne(const std::unique_ptr<Personne> &p, const unsigned long long &numero, const std::string& nom, const Sexe &sexe) {
	if (!p) throw std::invalid_argument("Pointeur null");
	
	p->numero = numero;
	p->sexe = sexe;
	p->nom = nom;
}

static void afficher_personne(const std::unique_ptr<Personne> &p) {
	if (!p) throw std::invalid_argument("Pointeur null");
	
	const auto sexe_name = sexe_to_string(sexe_personne(p));
	auto numero = "0" + std::to_string(numero_personne(p));
	// ajouter espace tous les 2 chiffres
	for (auto i = numero.size(); i > 1; i -= 2) {
			numero.insert(i, " ");
	}
	
	std::cout << "Personne créée :"
	<< "\n  Numéro : " + numero
	<< "\n  Nom : " + nom_personne(p)
	<< "\n  Sexe : " + std::to_string(sexe_personne(p)) + " (" + sexe_name + ")"
	<< '\n';
}

static std::string nom_personne(const std::unique_ptr<Personne> &p) {
	if (!p) throw std::invalid_argument("Pointeur null");
	
	return p->nom;
}

static Sexe sexe_personne(const std::unique_ptr<Personne> &p) {
	if (!p) throw std::invalid_argument("Pointeur null");
	
	return p->sexe;
}

static unsigned long long numero_personne(const std::unique_ptr<Personne> &p) {
	if (!p) throw std::invalid_argument("Pointeur null");
	
	return p->numero;
}

void Test_Fonction() {
	const auto p = creer_personne();
	constexpr auto name = "toto";
	initialiser_personne(p, 6'78'98'76'54ULL, name, Sexe::MASCULIN);
	afficher_personne(p);
	detruire_personne(const_cast<std::unique_ptr<Personne>&>(p));
}

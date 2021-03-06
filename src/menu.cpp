#include "menu.hpp"

static void runExercice(const int &n) {
	switch (n) {
		case 1:
			ex1();
			break;
		case 2:
			Test_Fonction();
			break;
		default:
			std::cout << "Choix invalide." << std::endl;
			break;
	}
}

static inline void show_exercices_list() {
	for (int i = 1; i < 3; ++i) std::cout << "Exercise " << i << "\n";
}

void show_menu() {
	show_exercices_list();
	
	do {
		std::cout << "Veuillez choisir un exercice à lancer : ";
		
		std::string input;
		std::cin >> input;
		
		if (tolower(input) == "exit") break;
		
		if (input.length() != 1U || input[0U] < '1' || input[0U] > '5') {
			std::cout << "Numéro d'exercice invalide." << '\n';
			continue;
		}
		
		const auto &exercise = std::stoi(input);
		
		runExercice(exercise);
		std::cout << "Tapez ENTRÉE pour continuer." << '\n';
		getch();
		
		show_exercices_list();
	} while (true);
}

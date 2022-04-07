#include "menu.hpp"

void runExercice(const int &n) {
	switch (n) {
		/*case 1:
			ex1();
			break;
		case 2:
			ex2();
			break;
		case 3:
			ex3();
			break;*/
		default:
			std::cout << "Choix invalide." << std::endl;
			break;
	}
}

inline void show_exercices_list() {
	for (int i = 1; i < 4; ++i) std::cout << "Exercise " << i << "\n";
}

void show_menu() {
	show_exercices_list();
	
	do {
		std::cout << "Veuillez choisir un exercice à lancer : ";
		
		std::string input;
		std::cin >> input;
		
		if (tolower(input) == "exit") break;
		
		if (input.length() != 1 || input[0] < '1' || input[0] > '5') {
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

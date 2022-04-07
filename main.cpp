#include "main.hpp"

int main() {
#ifdef _WIN32
	// fixe les accents dans les consoles sous windows
	SetConsoleOutputCP( 65001 );
#endif
	
	show_menu();
}
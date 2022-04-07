#pragma once

#include <conio.h>
#include <iostream>
#include "exercices/ex1.hpp"
/*#include "exercices/ex2.hpp"
#include "exercices/ex3.hpp"*/
#include "utils.hpp"

/**
 * Prend un entier en entrée et exécute l'exercice correspondant.
 *
 * @param n le numéro de l'exercice à exécuter.
 */
void runExercice(const int &n);

/**
 * Affiche la liste des exercices.
 */
inline void show_exercices_list();

/**
 * Affiche le menu, demande à l'utilisateur de choisir un exercice, exécute l'exercice, affiche à nouveau le menu après.
 * L'utilisateur peut quitter le programme en écrivant "exit".
 */
void show_menu();

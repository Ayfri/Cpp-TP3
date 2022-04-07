#pragma once

#include <iostream>

#define DEBUG(x) std::cout << __FILE__ << ":" << __LINE__ << ": " << x << '\n';

#define MAX(a, b) ((a) > (b) ? (a) : (b))

void ex1();
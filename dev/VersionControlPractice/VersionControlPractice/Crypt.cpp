#include "Crypt.h"
#include <iostream>

void Crypt::DisplayMessage() // Declaration for .h file
{

	std::cout << "WARNING: Unauthorized souls detected!\n"; 

	std::cout << "The crypt keeper has awakened!\n";
}

void Crypt::DisplayMenu()
{
	std::cout << "\n1. Enter the Crypt\n";
	std::cout << "2. Flee\n";
}
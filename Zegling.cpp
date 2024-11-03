#include "Zegling.h"

Zegling::Zegling()
{
	health = 35;
	initializeHealth = health;
}

void Zegling::Recovery()
{
	health = initializeHealth;
}

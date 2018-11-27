#include "pch.h"
#include "Statsheet.h"


Statsheet::Statsheet()
{
	bool test[] = { false, true, true, false, false, false };
	int ability_array[] = { 7, 10, 10, 10, 10, 10 };
	Ability_scores test_input(ability_array, test, 1);
}


Statsheet::~Statsheet()
{
}

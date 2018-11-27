#pragma once
#include <vector>
#include "Toolbox.h"

class Ability_scores
{
private:
	Ability scores[6];
	int proficiency;
public:
	Ability_scores();
	Ability_scores(int abil[], bool isProf[], int level);
	~Ability_scores();
};


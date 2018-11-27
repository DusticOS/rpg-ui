#include "pch.h"
#include "Ability_scores.h"
#include <array>

Ability_scores::Ability_scores()
{

}

Ability_scores::Ability_scores(int abil[], bool isProf[], int level)
{
	//set proficiency bonus based on character level
	if (level > 0 && level < 5)
	{
		this->proficiency = 2;
	}
	else if (level >= 5 && level < 9)
	{
		this->proficiency = 3;
	}
	else if (level >= 9 && level < 13)
	{
		this->proficiency = 4;
	}
	else if (level >= 13 && level < 17)
	{
		this->proficiency = 5;
	}
	else if (level < 21)
	{
		this->proficiency = 6;
	}
	else
	{
		throw std::invalid_argument("recieved value outside normal level range");
	}

	//ability scores, for ease of use, are denoted by numbers.
	//0: Strength
	//1: Dexterity
	//2: Consitution
	//3: Intelligence
	//4: Wisdom
	//5: Charisma
	for (int i = 0; i < 6; i++)
	{
		scores[i].score = abil[i];
		scores[i].currentScore = abil[i];
		scores[i].mod = scores[i].currentScore < 10 ? (scores[i].currentScore - 10) / 2.0 - 0.5 : (scores[i].currentScore - 10) / 2;
		scores[i].passive = scores[i].mod + 8;
		scores[i].isProficient = isProf[i];
		scores[i].save = scores[i].mod + (scores[i].isProficient * this->proficiency);
	}
}


Ability_scores::~Ability_scores()
{
}

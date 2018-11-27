#pragma once
#include <string.h>
#include "Toolbox.h"
#include "Ability_scores.h"

class Combat_Statistics
{
private:
	int armor_class;
	int initiative;
	std::string character_size;
	int move_speed;
	vision character_vision;
	bool inspiration;
	int HP;
	int currentHP;
	int tempHP;
	Hit_die HD;
	Death_save DS;
public:
	Combat_Statistics();
	~Combat_Statistics();
};


#pragma once
#include <vector>
#include "ability_scores.h"
#include "Combat_statistics.h"
/*#include "description.h"
#include "inventory.h"
#include "feature.h"
#include "spell_list.h"*/

using namespace std;

class Statsheet
{
private:
	Ability_scores abilities;
	Combat_Statistics combatStats;
	vector<Skill> skills;
	/*description descrip;
	inventory inv;
	vector<feature> feat;
	spell_list spells;*/
public:
	Statsheet();
	~Statsheet();
};


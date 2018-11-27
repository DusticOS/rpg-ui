#include "Toolbox.h"

Hit_die newHD(int num, int val)
{
	Hit_die HD;
	HD.num = num;
	HD.val = val;
	return HD;
}

skill newSkill(std::string name, int ability_ID, bool isProficient)
{
	skill s;
	s.name = name;
	s.ability_ID = ability_ID;
	s.isProficient = isProficient;
}
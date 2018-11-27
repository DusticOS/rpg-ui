#pragma once
#include <array>
#include <vector>

struct Ability
{
	int score;
	int currentScore;
	int mod;
	int isProficient;
	int passive;
	int save;
};

struct Hit_die
{
	int num;
	int val;
};

struct Death_save
{
	int success;
	int failure;
};

struct Skill
{
	std::string name;
	int ability_ID;
	bool isProficient;
};

struct Racial_bonus
{
	int ability_ID;
	int bonus;
};

struct Vision
{
	std::string type;
	int distance; //only for darkvision
};

Hit_die newHD(int num, int val);
Skill newSkill(std::string name, int ability_ID, bool isProficient);

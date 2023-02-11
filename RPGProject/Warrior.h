#ifndef WARRIOR_H
#define WARRIOR_H
#include"Player.h"
#include<iostream>

class Warrior : public Player {
public:
	Warrior(std::string name, Race race, int hitPoints, int magicPoints) {
		this->name = name;
		this->race = race;
		this->hitPoints = hitPoints;
		this->magicPoints = magicPoints;
	}
	std::string attack() {
		return "I will destroy you with my sword, foul demon!";
	}
private:
	std::string name;
	Race race;
	int hitPoints;
	int magicPoints;
};

#endif
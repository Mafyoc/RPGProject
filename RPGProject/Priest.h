#ifndef PRIEST_H
#define PRIEST_H
#include"Player.h"
#include<iostream>

class Priest : public Player {
public:
	Priest(std::string name, Race race, int hitPoints, int magicPoints) {
		this->name = name;
		this->race = race;
		this->hitPoints = hitPoints;
		this->magicPoints = magicPoints;
	}
	std::string attack() {
		return "I will assault you with holy wrath!";
	}
private:
	std::string name;
	Race race;
	int hitPoints;
	int magicPoints;
};

#endif

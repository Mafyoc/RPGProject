#ifndef MAGE_H
#define MAGE_H
#include"Player.h"
#include<iostream>

class Mage : public Player {
public:
	Mage(std::string name, Race race, int hitPoints, int magicPoints) {
		this->name = name;
		this->race = race;
		this->hitPoints = hitPoints;
		this->magicPoints = magicPoints;
	}
	std::string attack() {
		return "I will crush you with the power of my arcane missile!";
	}
private:
	std::string name;
	Race race;
	int hitPoints;
	int magicPoints;
};

#endif

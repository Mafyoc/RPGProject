#ifndef MAGE_H
#define MAGE_H
#include"Player.h"
#include<iostream>

class Mage : public Player {
public:
	Mage(std::string name, Race race) : Player(name, race, 100, 200) {
	}
	std::string attack() const {
		return "I will crush you with the power of my arcane missile!";
	}
};

#endif

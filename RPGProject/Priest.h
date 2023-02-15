#ifndef PRIEST_H
#define PRIEST_H
#include"Player.h"
#include<iostream>

class Priest : public Player {
public:
	Priest(std::string name, Race race) : Player(name, race, 150, 150) {
	}
	std::string attack() const {
		return "I will assault you with holy wrath!";
	}
};

#endif

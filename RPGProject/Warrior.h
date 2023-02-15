#ifndef WARRIOR_H
#define WARRIOR_H
#include"Player.h"

class Warrior : public Player {
public:
	Warrior(std::string name, Race race) : Player(name, race, 200, 0) {
	}
	std::string attack() const {
		return "I will destroy you with my sword, foul demon!";
	}
};

#endif
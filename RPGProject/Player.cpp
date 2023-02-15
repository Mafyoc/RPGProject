#include"Player.h"
#include<string>

Player::Player(std::string name, Race race, int hitPoints, int magicPoints) {
	this->name = name;
	this->race = race;
	this->hitPoints = hitPoints;
	this->magicPoints = magicPoints;
}
std::string Player::getName() const {
	return name;
}
Race Player::getRace() const{
	return race;
}
std::string Player::whatRace() const {
	if (race == Race::HUMAN){
		return "Human";
	}
	else if (race == Race::ELF) {
		return "Elf";
	}
	else if (race == Race::DWARF) {
		return "Dwarf";
	}
	else if (race == Race::ORC) {
		return "Orc";
	}
	else if (race == Race::TROLL) {
		return "Troll";
	}
}
int Player::getHitPoints() const {
	return hitPoints;
}
int Player::getMagicPoints() const {
	return magicPoints;
}
void Player::setName(std::string name) {
	this->name = name;
}
void Player::setRace(Race race) {
	this->race = race;
}
void Player::setHitPoints(int hitPoints) {
	this->hitPoints = hitPoints;
}
void Player::setMagicPoints(int magicPoints) {
	this->magicPoints = magicPoints;
}
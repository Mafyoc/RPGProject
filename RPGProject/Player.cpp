#include"Player.h"
#include<string>

Player::Player() {
}
Player::Player(std::string name, Race race, int hitPoints, int magicPoints) {
	this->name = name;
	this->race = race;
	this->hitPoints = hitPoints;
	this->magicPoints = magicPoints;
}
std::string Player::getName() {
	return name;
}
Race Player::getRace() {
	return race;
}
std::string Player::whatRace() {
	if (race == Race::HUMAN){
		return "Human";
	}
	if (race == Race::ELF) {
		return "Elf";
	}
	if (race == Race::DWARF) {
		return "Dwarf";
	}
	if (race == Race::ORC) {
		return "Orc";
	}
	if (race == Race::TROLL) {
		return "Troll";
	}
}
int Player::getHitPoints() {
	return hitPoints;
}
int Player::getMagicPoints() {
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
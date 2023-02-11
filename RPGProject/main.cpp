#include"Player.h"
#include "Warrior.h"
#include"Priest.h"
#include"Mage.h"
#include<string>
#include<iostream>

int main() {
	Player* myWarrior = new Warrior("Joe", Race::HUMAN, 200, 0);
	Player* myPriest = new Priest("Dan", Race::ELF, 150, 150);
	Player* myMage = new Mage("Joe", Race::DWARF, 100, 200);

	std::cout << ((Player*)myWarrior)->attack() << std::endl;
	std::cout << ((Player*)myPriest)->attack() << std::endl;
	std::cout << ((Player*)myMage)->attack() << std::endl;
	
	delete myWarrior;
	delete myPriest;
	delete myMage;

	myWarrior = nullptr;
	myPriest = nullptr;
	myMage = nullptr;

	return 0;
}
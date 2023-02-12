#include"Player.h"
#include "Warrior.h"
#include"Priest.h"
#include"Mage.h"
#include<string>
#include<iostream>

int main() {
	
	bool characerCreating = true;

	while(characerCreating = true)
	{
		std::cout << "Please enter the corresponding number to select a class" << std::endl;
		std::cout << "\t 1 - Warrior" << std::endl;
		std::cout << "\t 2 - Priest" << std::endl;
		std::cout << "\t 3 - Mage" << std::endl;
		if (getline(std::cin)) {
		}
	}
	
	
	
	
	
	/*
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
	*/

	return 0;
}
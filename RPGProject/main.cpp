#include"Player.h"
#include "Warrior.h"
#include"Priest.h"
#include"Mage.h"
#include<string>
#include<iostream>

int main() {
	
	std::string currentName;
	Race currentRace;
	bool characerCreating = true;
	std::string input;

	while (characerCreating == true)
	{
		std::cout << "Please enter the corresponding number to select a class" << std::endl;
		std::cout << "\t 1 - Warrior" << std::endl;
		std::cout << "\t 2 - Priest" << std::endl;
		std::cout << "\t 3 - Mage" << std::endl;
		getline(std::cin, input);

		if (input == "1") {//warrior
			std::cout << "Enter the name of your warrior" << std::endl;
			getline(std::cin, currentName);
			std::cout << "Please enter the corresponding number to select a race" << std::endl;
			std::cout << "\t 1 - HUMAN" << std::endl;
			std::cout << "\t 2 - ELF" << std::endl;
			std::cout << "\t 3 - DWARF" << std::endl;
			std::cout << "\t 4 - ORC" << std::endl;
			std::cout << "\t 5 - TROLL" << std::endl;
			getline(std::cin, input);

		}
		if (input == "2") {//Priest

		}
		if (input == "3") {//Mage

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
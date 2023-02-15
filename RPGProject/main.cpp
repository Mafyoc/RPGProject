#include"Player.h"
#include "Warrior.h"
#include"Priest.h"
#include"Mage.h"
#include<string>
#include<iostream>
#include<vector>

void printMainMenu();
void printRaceMenu();

Player* createPlayer(std::string PlayerName, int typeNum, int raceNum);
void doCleanup(std::vector<Player*> playerList);
Race getRace(int raceNum);

void printAll(std::vector<Player*> playerList);

int main() {

	int choice;
	int raceNum;
	std::string playerName;

	std::vector<Player*> playerList;

	printMainMenu();
	std::cin >> choice;
	std::cin.get();

	while (choice != 0) {
		std::cout << "Enter the name of your character" << std::endl;
		getline(std::cin, playerName);

		printRaceMenu();
		std::cin >> raceNum;
		std::cin.get();

		Player* tempPlayer = createPlayer(playerName, choice, raceNum);
		playerList.push_back(tempPlayer);

		//---Add another player?
		printMainMenu();
		std::cin >> choice;
		std::cin.get();
	}

	printAll(playerList);

	doCleanup(playerList);

	return 0;

}

void printMainMenu() {
	std::cout << std::endl;	
	std::cout << "Please enter the corresponding number to select a class" << std::endl;
	std::cout << "\t 1 - Warrior" << std::endl;
	std::cout << "\t 2 - Priest" << std::endl;
	std::cout << "\t 3 - Mage" << std::endl;
	std::cout << "\t 0 - Finish creating player characters" << std::endl;
}
void printRaceMenu() {
	std::cout << "Please enter the corresponding number to select a race" << std::endl;
	std::cout << "\t 1 - HUMAN" << std::endl;
	std::cout << "\t 2 - ELF" << std::endl;
	std::cout << "\t 3 - DWARF" << std::endl;
	std::cout << "\t 4 - ORC" << std::endl;
	std::cout << "\t 5 - TROLL" << std::endl;
}

Player* createPlayer(std::string playerName, int typeNum, int raceNum) {
	Race playerRace = getRace(raceNum);

	Player* tempPlayer = nullptr;

	if (typeNum == 1) {
		tempPlayer = new Warrior(playerName, playerRace);
	}
	else if (typeNum == 2) {
		tempPlayer = new Priest(playerName, playerRace);
	}
	else if (typeNum == 3) {
		tempPlayer = new Mage(playerName, playerRace);
	}

	return tempPlayer;
}
void doCleanup(std::vector<Player*> playerList) {
	for (Player* player : playerList) {
		delete player;
	}
	playerList.clear();
}
Race getRace(int raceNum) {
	Race race;

	if (raceNum == 1) {
		race = Race::HUMAN;
	}
	else if (raceNum == 2) {
		race = Race::ELF;
	}
	else if (raceNum == 3) {
		race = Race::DWARF;
	}
	else if (raceNum == 4) {
		race = Race::ORC;
	}
	else if (raceNum == 5) {
		race = Race::TROLL;
	}

	return race;
}

void printAll(std::vector<Player*> playerList) {
	for (int i = 0; i < playerList.size();i++) {
		std::cout << "I'm a " << playerList[i]->whatRace() << " and my attack is : " << playerList[i]->attack() << std::endl;
	}
}
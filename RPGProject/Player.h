#ifndef PLAYER_H
#define PLAYER_H

#include<string>

enum Race{HUMAN, ELF, DWARF, ORC, TROLL};

class Player {
public:
	Player(std::string name, Race race, int hitPoints, int magicPoints);
	std::string getName();
	Race getRace();
	std::string whatRace();
	int getHitPoints();
	int getMagicPoints();
	void setName(std::string name);
	void setRace(Race race);
	void setHitPoints(int hitPoints);
	void setMagicPoints(int magicPoints);
	virtual std::string attack() = 0;
private:
	std::string name;
	Race race;
	int hitPoints;
	int MagicPoints;
};

#endif
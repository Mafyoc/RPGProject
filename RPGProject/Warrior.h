#ifndef WARRIOR_H
#define WARRIOR_H

class Warrior : public Player {
public:

private:
	std::string name;
	Race race;
	int hitPoints = 200;
	int MagicPoints = 0;
};

#endif
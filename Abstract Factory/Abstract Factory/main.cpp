#include<iostream>
#include<vector>

class Character {
public:
	Character(){}
	virtual ~Character(){}
	virtual void draw() = 0;
};

class Player : public Character {
public:
	void draw() {
		std::cout<< "Draw Player" <<std::endl;
	}
};

class Boss : public Character {
public:
	void draw() {
		std::cout << "Draw Boss" << std::endl;
	}
};

class Factory {
public:
	virtual Character* CreatePlayer() = 0;
	virtual Character* CreateOpponents() = 0;
};

class CharacterFactory :public Factory {
public:
	Character* CreatePlayer() {
		return new Player;
	}
	Character* CreateOpponents() {
		return new Boss;
	}
};

int main() {
	int numOfPlayer = 2;
	int numOfEnemy = 3;
	Factory* factory = new CharacterFactory;
	std::vector<Character*> characters;
	for (int i = 0; i < numOfPlayer; i++)
	{
		characters.push_back(factory->CreatePlayer());
	}

	for (int i = 0; i < numOfEnemy; i++) {
		characters.push_back(factory->CreateOpponents());
	}

	for (int i = 0; i < characters.size(); i++) {
		characters[i]->draw();
	}
}
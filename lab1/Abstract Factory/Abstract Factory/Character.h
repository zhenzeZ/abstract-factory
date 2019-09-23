#pragma once
#include <iostream>
class Character {
public:
	Character() {}
	virtual ~Character() {}
	virtual void draw() = 0;
};

class Player : public Character {
public:
	void draw() {
		std::cout << "Draw Player" << std::endl;
	}
};

class Boss : public Character {
public:
	void draw() {
		std::cout << "Draw Boss" << std::endl;
	}
};

class Minion : public Character {
public:
	void draw() {
		std::cout << "Draw Minion" << std::endl;
	}
};
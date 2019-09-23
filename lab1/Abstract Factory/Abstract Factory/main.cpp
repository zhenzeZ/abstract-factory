#include<iostream>
#include<vector>
#include "Factory.h"

int main() {
	Factory* factory = new CharacterFactory;
	std::vector<Character*> characters;
	characters.push_back(factory->CreatePlayer());
	characters.push_back(factory->CreateOpponents());
	characters.push_back(factory->CreateMinion());
	characters.push_back(factory->CreateMinion());
	characters.push_back(factory->CreateMinion());

	for (int i = 0; i < characters.size(); i++) {
		characters[i]->draw();
	}
}
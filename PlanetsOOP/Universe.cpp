#include "main.h"

void Universe::addGalaxy(Galaxy* galaxy) {
	this->listGalaxy.push_back(*galaxy);
}

Galaxy Universe::searchGalaxy(Galaxy a)
{
	for (int i = 0; i < this->listGalaxy.size(); i++) {
		if (this->listGalaxy[i] == a) {
			return this->listGalaxy[i];
		}
	}
}

Galaxy Universe::searchGalaxy(string a)
{
	for (int i = 0; i < this->listGalaxy.size(); i++) {
		if (this->listGalaxy[i].getName() == a) {
			return this->listGalaxy[i];
		}
	}
}

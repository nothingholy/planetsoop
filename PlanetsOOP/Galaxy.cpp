#include "main.h"

Galaxy::Galaxy(string name) {
	this->name = name;
}

string Galaxy::getName()
{
	return this->name;
}

void Galaxy::setName(string name)
{
	this->name = name;
}

void Galaxy::addPlanet(Planet* planet)
{
	this->listPlanets.push_back(*planet);
}

int Galaxy::searchPlanet(Planet& a)
{
	for (int i = 0; i < this->listPlanets.size(); i++) {
		if (a == this->listPlanets[i]) {
			return i;
		}
	}
	return -1;
}

int Galaxy::searchPlanet(string a)
{
	for (int i = 0; i < this->listPlanets.size(); i++) {
		if (a == this->listPlanets[i].getName())
			return i;
	}
	return -1;
}

void Galaxy::delPlanet(Planet a)
{
	for (int i = 0; i < this->listPlanets.size; i++) {
		if (this->listPlanets[i] == a)
			this->listPlanets.erase(this->listPlanets.begin() + i);
	}
}

bool Galaxy::operator==(const Galaxy& a)
{
	return this->name == a.name && this->listPlanets == a.listPlanets;
}



#define _USE_MATH_DEFINES
#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;


class Planet {
	string name;
	double radius;
	double period;
public:
	Planet();
	Planet(string, double, double);
	string getName();
	void setName(string);
	string behaviour();
	bool operator==(const Planet&);
	friend ostream& operator<<(ostream& s, Planet& a) {
		s << "Name: " << a.name << "Radius: " << a.radius << "Period: " << a.period;
		return s;
	}
};

class Galaxy {
	string name;
	vector<Planet> listPlanets;
public:
	Galaxy() {}
	Galaxy(string);
	string getName();
	void setName(string);
	void addPlanet(Planet*);
	int searchPlanet(Planet&);
	int searchPlanet(string);
	void delPlanet(Planet);
	bool operator==(const Galaxy&);
};

class Universe {
	vector<Galaxy> listGalaxy;
public:
	void addGalaxy(Galaxy*);
	Galaxy searchGalaxy(Galaxy);
	Galaxy searchGalaxy(string);

};
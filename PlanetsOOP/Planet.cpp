#include "main.h"

Planet::Planet()
{
	this->radius = 0.0;
	this->period = 0.0;
}

Planet::Planet(string name,double radius,double period) {
	this->name = name;
	this->radius = radius;
	this->period = period;
}

string Planet::getName()
{
	return this->name;
}

void Planet::setName(string name)
{
	this->name = name;
}

string Planet::behaviour()
{
	return "Name: " + this->name + "; Speed: " + to_string((2 * M_PI * this->radius) / this->period);
}

bool Planet::operator==(const Planet& a)
{
	return this->name == a.name, this->radius = a.radius, this->period = a.period;
}

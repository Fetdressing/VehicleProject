#include "Vehicle.h"


Vehicle::Vehicle(const Vec2& position, float speed)
{
	this->position = Vec2(position);
	this->speed = speed;
}

string Vehicle::ToString()
{
	return this->position.ToString() + "\n";
}
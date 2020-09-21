#pragma once

using namespace std;

#ifndef VEHICLE
#define VEHICLE

#include <string>
#include "BaseObject.h"

class Vec2;

class Vehicle : BaseObject
{
public:
	Vehicle(const Vec2& position, float speed);
	string ToString();

	float GetSpeed() { return speed; }
	Vec2 * const GetPosition() { return position; }

protected:
	
	Vec2* position;
	float speed;
};

#endif // !VEHICLE

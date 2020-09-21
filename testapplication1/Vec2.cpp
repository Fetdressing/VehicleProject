#include "Vec2.h"
#include <iostream>

Vec2::Vec2()
{
	this->x = 0;
	this->y = 0;
}

Vec2::Vec2(float x, float y)
{
	this->x = x;
	this->y = y;
}

Vec2::Vec2(const Vec2& toCopy)
{
	this->x = toCopy.x;
	this->y = toCopy.y;
}

float& Vec2::operator[] (int index)
{
	if (index == 0)
	{
		return x;
	}
	else if (index == 1)
	{
		return y;
	}
	else
	{
		cout << "Invalid index" + std::to_string(index);
	}
}

// Inherited via BaseObject
string Vec2::ToString()
{
	return to_string(x) + ", " + to_string(y);
}
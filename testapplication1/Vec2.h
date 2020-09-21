#pragma once

#ifndef VEC2
#define VEC2

#include "BaseObject.h"
using namespace std;

class Vec2 : BaseObject
{
public:
	float x, y;

	Vec2();
	Vec2(float x, float y);
	Vec2(const Vec2& toCopy);
	float& operator[] (int index);

	// Inherited via BaseObject
	virtual string ToString();
};

#endif
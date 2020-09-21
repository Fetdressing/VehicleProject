#pragma once

#ifndef CAR
#define CAR

#include "Vehicle.h"

class Engine; // Predefine class.

class Car : public Vehicle
{
public:
	Car(Engine* const engine, const Vec2& position, float speed);
	Car(const Engine& engine, const Vec2& position, float speed);
	~Car()
	{
		delete(engine);
	}

	string ToString();
private:
	Engine* engine;
};

#endif // !CAR

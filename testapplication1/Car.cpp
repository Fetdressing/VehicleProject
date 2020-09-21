#include "Car.h"
#include "Engine.h"

Car::Car(Engine* const engine, const Vec2& position, float speed) : Vehicle(position, speed)
{
	this->engine = engine;
}

Car::Car(const Engine& engine, const Vec2& position, float speed) : Vehicle(position, speed)
{
	this->engine = new Engine(engine);
}

string Car::ToString()
{
	return "OVERRIDEN " + Vehicle::ToString();
}
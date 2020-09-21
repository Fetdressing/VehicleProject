#pragma once

#ifndef ENGINE
#define ENGINE

#include "BaseObject.h"

class Notification; // Predefine class.

class Engine : BaseObject
{
public:
	Engine(int nrCylinders, Notification* notificationH);

	/// <summary>
	/// Passing an object to copy, it is const so that we may not modify the passed object, just grab its values.
	/// </summary>
	/// <param name="toCopy">Object to copy.</param>
	Engine(const Engine& toCopy);
	~Engine();
	virtual std::string ToString();

private:
	int nrCylinders;
	Notification* notificationH;
};

#endif // !ENGINE

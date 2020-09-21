#include "Engine.h"
#include "Notification.h"

Engine::Engine(int nrCylinders, Notification* notificationH)
{
	this->nrCylinders = nrCylinders;
	this->notificationH = notificationH;
}

/// <summary>
/// Passing an object to copy, it is const so that we may not modify the passed object, just grab its values.
/// </summary>
/// <param name="toCopy">Object to copy.</param>
Engine::Engine(const Engine& toCopy)
{
	this->nrCylinders = toCopy.nrCylinders;
	this->notificationH = new Notification(*(toCopy.notificationH));
}

Engine::~Engine()
{
	delete notificationH;
}

string Engine::ToString()
{
	string text = "\nNumber of Cylinders: " + to_string(this->nrCylinders);
	text += notificationH->ToString();
	return text;
}
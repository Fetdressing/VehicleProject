#pragma once

#ifndef NOTIFICATION
#define NOTIFICATION

using namespace std;

#include <string>
#include "BaseObject.h"

class Notification : BaseObject
{
public:
	/// <summary>
	/// Passing an object to copy, it is const so that we may not modify the passed object, just grab its values.
	/// </summary>
	/// <param name="toCopy">Object to copy.</param>
	Notification(const Notification& toCopy);
	Notification(string*&& listedIssues, int nrListedIssues);

	virtual ~Notification();

	// Inherited via BaseObject
	virtual string ToString();

private:
	int nrListedIssues;
	string* listedIssues;	
};


#endif // !NOTIFICATION

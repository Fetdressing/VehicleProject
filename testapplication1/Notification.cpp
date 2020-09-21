#include "Notification.h"

Notification::Notification(string*&& listedIssues, int nrListedIssues)
{
	this->listedIssues = std::move(listedIssues);
	this->nrListedIssues = nrListedIssues;
}

/// <summary>
/// Passing an object to copy, it is const so that we may not modify the passed object, just grab its values.
/// </summary>
/// <param name="toCopy">Object to copy.</param>
Notification::Notification(const Notification& toCopy)
{
	this->nrListedIssues = toCopy.nrListedIssues;
	this->listedIssues = new string[this->nrListedIssues];

	for (int i = 0; i < this->nrListedIssues; i++)
	{
		*(this->listedIssues + i) = *(toCopy.listedIssues + i);
	}
}

Notification::~Notification()
{
	delete[] listedIssues;
}

// Inherited via BaseObject
string Notification::ToString()
{
	string text = "\nListed Issues: \n";

	for (int i = 0; i < nrListedIssues; i++)
	{
		text += *(listedIssues + i);
	}

	return text;
}
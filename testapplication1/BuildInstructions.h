#pragma once

#include <string>
using namespace std;

namespace BI
{
	struct EngineInstr
	{
	public:
		EngineInstr(NotificationInstr&& listedIssues, int nrListedIssues);
		int nrCylinders;
		NotificationInstr* notificationH;
	};

	struct NotificationInstr
	{
	public:
		NotificationInstr(string*&& listedIssues, int nrListedIssues);
		string* lisedIssues;
		int nrListedIssues;
	};
}
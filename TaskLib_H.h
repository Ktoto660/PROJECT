#pragma once


#ifdef Task_Lib
#define TASKLIBRARY_API __declspec(dllexport)
#else
#define TASKLIBRARY_API __declspec(dllimport)
#endif

using namespace std;
#include <string>

class TaskState
{
private:
	string state;

public:
	TaskState();
	TaskState(string a_state);

	string getState();
};

class Task
{
private:
	string name;
	string description;
	TaskState state;
	string startDate;
	string completionDate;
	string developer;

public:
	Task(string a_name, string a_description, string a_state, string a_developer, string a_startDate, string a_completionDate);

	string getName();
	string getDescription();
	string getDeveloper();
	string getState();
	string getStartDate();
	string getCompletionDate();

	void changeState(string newState);
};
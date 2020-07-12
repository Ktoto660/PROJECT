
#include <iostream>
#include "TaskLib_H.h"
#include <vector> 

TaskState::TaskState()
{
	state = "не начата";
}

TaskState::TaskState(string a_state)
{
	state = a_state;
}

string TaskState::getState()
{
	return state;
}

Task::Task(string a_name, string a_description, string a_state, string a_developer, string a_startDate, string a_completionDate)
{
	name = a_name;
	description = a_description;
	state = a_state;
	developer = a_developer;

	startDate = a_startDate;
	completionDate = a_completionDate;
}

string Task::getName()
{
	return name;
}

string Task::getDescription()
{
	return description;
}

string Task::getDeveloper()
{
	return developer;
}

string Task::getState()
{
	return state.getState();;
}

string Task::getStartDate()
{
	return startDate;
}

string Task::getCompletionDate()
{
	return completionDate;
}

void Task::changeState(string newState)
{
	vector<string> states = { "не начата", "в работе", "ожидание", "завершена", "утверждена" };

	int newStateInd = -1 - states.size();
	int currStateInd = -1 - states.size();

	for (int stateInd = 0; stateInd < states.size(); ++stateInd)
	{
		if (newState == states[stateInd]) { newStateInd = stateInd; }
		if (state.getState() == states[stateInd]) { currStateInd = stateInd; }
	}

	if (newStateInd != -1 - states.size())
	{
		if (newStateInd - currStateInd == 1) { state = newState; }
	}
}
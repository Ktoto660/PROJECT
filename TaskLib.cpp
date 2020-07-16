#include "TaskLib_H.h"
#include <vector> 


TaskState::TaskState()  // Конструктор по умолчанию
{
	state = "не начата"; // изначально статус задания "не начата"
}

TaskState::TaskState(string a_state)  // констурктор
{
	state = a_state;
}

string TaskState::getState()  // получает доступ к приватному атрибуту "state"
{
	return state;
}

Task::Task(string a_name, string a_description, string a_state, string a_developer, string a_startDate, string a_completionDate)  // конструктор для класса Task
{
	name = a_name;  // название задания
	description = a_description;  // описание задания
	state = a_state;  // статус задания
	developer = a_developer;  // исполнитель

	startDate = a_startDate;  // дата начала задания
	completionDate = a_completionDate;  // дата окончания задания
}

string Task::getName()  // получает доступ к приватному атрибуту "name"
{
	return name;
}

string Task::getDescription()  // получает доступ к приватному атрибуту "description"
{
	return description;
}

string Task::getDeveloper()  // получает доступ к приватному атрибуту "developer"
{
	return developer;
}

string Task::getState()  // получает доступ к приватному атрибуту "state"
{
	return state.getState();;
}

string Task::getStartDate()  // получает доступ к приватному атрибуту "startDate"
{
	return startDate;
}

string Task::getCompletionDate()  // получает доступ к приватному атрибуту "completionDate"
{
	return completionDate;
}

void Task::changeState(string newState) // меняет статус задания
{
	vector<string> states = { "не начата", "в работе", "ожидание", "завершена", "утверждена" };  // вектор возможных статусов задания

	int newStateInd = -1 - states.size();  // индекс нового статуса (на который пытаемся заменить)
	int currStateInd = -1 - states.size();  // индекс текущего статуса

	for (int stateInd = 0; stateInd < states.size(); ++stateInd)  // в цикле проходимся по всем возможным статусам
	{
		if (newState == states[stateInd]) { newStateInd = stateInd; }  // находим индекс нового статуса
		if (state.getState() == states[stateInd]) { currStateInd = stateInd; }  // находим индекс текущего статуса
	}

	if (newStateInd != -1 - states.size())  // если новый статус есть среди доступных (которые есть в векторе)
	{
		if (newStateInd - currStateInd == 1)  // если новый статус идет после текущего (можем заменить с "завершена" на "утверждена", но не наоборот)
		{ 
			state = newState; // меняем статус
		}
	}

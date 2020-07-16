#pragma once

#ifdef Task_Lib
#define TASKLIBRARY_API __declspec(dllexport)
#else
#define TASKLIBRARY_API __declspec(dllimport)
#endif
////////////////////////////////////

// В хедере объявляется каждая функция, объект и тип данных, являющиеся частью интерфейса вызова модуля  (*.h файле) 
// Грубо говоря, в заголовочном файле ты пишешь шаблон, прототип своей программы, а реализация классов и методов уже делается в отдельном *.cpp файле


using namespace std;
#include <iostream>
#include <string>

// Класс для статуса задания
class TaskState
{
private:
	string state;

public:
	TaskState();
	TaskState(string a_state);

	string getState(); 
};

//Класс для задания
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


#include <iostream>
#include <TaskLib_H.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    Task task1("namr1", "desc1", "не начата", "vlad1", "15 Мая", "20 Мая");
    Task task2("namr2", "desc2", "утверждена", "vlad2", "30 Февраля", "32 Декабря");
    Task task3("namr3", "desc3", "в работе", "vlad3", "23 Февраля", "8 Марта");

    //examples
    cout << task1.getName() << "\n";
    cout << task1.getDeveloper() << "\n";
    cout << task1.getDescription() << "\n";
    cout << task1.getStartDate() << "\n" << "\n";

    cout << task1.getState() << "\n";
    task1.changeState("в работе");
    cout << task1.getState() << "\n" << "\n";

    cout << task2.getState() << "\n";
    task2.changeState("завершена");
    cout << task2.getState() << "\n" << "\n";

    cout << task3.getState() << "\n";
    task3.changeState("ожидание");
    cout << task3.getState() << "\n" << "\n";

}
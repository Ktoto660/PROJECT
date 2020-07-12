
#include <iostream>
#include <TaskLib_H.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    Task task1("namr1", "desc1", "�� ������", "vlad1", "15 ���", "20 ���");
    Task task2("namr2", "desc2", "����������", "vlad2", "30 �������", "32 �������");
    Task task3("namr3", "desc3", "� ������", "vlad3", "23 �������", "8 �����");

    //examples
    cout << task1.getName() << "\n";
    cout << task1.getDeveloper() << "\n";
    cout << task1.getDescription() << "\n";
    cout << task1.getStartDate() << "\n" << "\n";

    cout << task1.getState() << "\n";
    task1.changeState("� ������");
    cout << task1.getState() << "\n" << "\n";

    cout << task2.getState() << "\n";
    task2.changeState("���������");
    cout << task2.getState() << "\n" << "\n";

    cout << task3.getState() << "\n";
    task3.changeState("��������");
    cout << task3.getState() << "\n" << "\n";

}
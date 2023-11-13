#include "Function_Prototypes.h"
#include "Libraries.h"
#include <Windows.h>

void mainMenu()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char menu;
    while (true)
    {
        cout << "Какую задачу вы хотите решить? : " << endl << endl << "Одномерные массивы ----> 1" << endl
            << "Двумерные массивы -----> 2 "
            << endl << "Работа c файлом -------> 3"
            << endl << endl << endl << "Выйти из программы ----> 0" << endl << endl;
        cin >> menu;

        system("cls");
        switch (menu)
        {
        case '1':
            basis1();
            break;
        case '2':
            basis2();
            break;
        case '3':
            basis3();
            break;
        case '0':
            cout << "До следующей встречи!" << endl;
            return;
        default:
            cout << "Вы ввели неверный пункт меню!" << endl << endl;
        }
    }
}
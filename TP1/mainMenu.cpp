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
        cout << "����� ������ �� ������ ������? : " << endl << endl << "���������� ������� ----> 1" << endl
            << "��������� ������� -----> 2 "
            << endl << "������ c ������ -------> 3"
            << endl << endl << endl << "����� �� ��������� ----> 0" << endl << endl;
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
            cout << "�� ��������� �������!" << endl;
            return;
        default:
            cout << "�� ����� �������� ����� ����!" << endl << endl;
        }
    }
}
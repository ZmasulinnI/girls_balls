#include "Libraries.h"
#include "Function_Prototypes.h"

void basis3()
{
    setlocale(LC_ALL, "RU");

    char menu3 ;
    const char* fileName = "text.txt";
    ifstream inputFile(fileName);

    //�������� �������
    if (!checkFileConditions(fileName, inputFile))
    {
        return;
    }
    system("cls");
    while (true)
    {    
        cout << "����� ������ �� ������ ������? : " << endl << endl
            << "C������ ����� �� ����� � ������� �� ����� ������ �����������, ��������� �� ��������� ���������� ����. ----> 1" << endl
            << "������� ������ ������ -----> 0" << endl << endl;
        
        cin >> menu3;
        
        system("cls");
        switch (menu3)
        {
        case '1':
            processSentencesInFile(fileName);
            break;
        case '0':
            return;
        default:
            cout << "�� ����� �������� ����� ����! ���������� ��� ���." << endl<< endl;

        }
    }
    _getch();
}
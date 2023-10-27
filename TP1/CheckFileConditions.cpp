#include "Libraries.h"
#include "Function_Prototypes.h"

bool checkFileConditions(const char* fileName, ifstream& inputFile)
{
    if (!fileExists(fileName))
    {
        cout << "���� �� ������� �������, ���� �� ����������!" << endl;
        return false;
    }

    if (isFileEmpty(fileName))
    {
        cout << "���� ����!" << endl;
        return false;
    }

    if (!inputFile)
    {
        cout << "������ �������� �����." << endl;
        return false;
    }
    return true;
}
#include "Libraries.h"
#include "Function_Prototypes.h"

bool checkFileConditions(const char* fileName, ifstream& inputFile)
{
    if (!fileExists(fileName))
    {
        cout << "Файл не удается открыть, файл не существует!" << endl;
        return false;
    }

    if (isFileEmpty(fileName))
    {
        cout << "Файл пуст!" << endl;
        return false;
    }

    if (!inputFile)
    {
        cout << "Ошибка открытия файла." << endl;
        return false;
    }
    return true;
}
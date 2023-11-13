#include "Libraries.h"
#include "Function_Prototypes.h"

// Функция для обработки предложений в файле
void processSentencesInFile(const char* fileName)
{
    int targetWordCount;
    cout << "Введите количество слов в предложении: ";

    for (;;)
    {
        cin >> targetWordCount;
        cout << endl;

        // Проверка на ошибку ввода
        if (cin.fail() || (cin.get() != '\n'))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистка буфера
            cout << "Неверный ввод. Пожалуйста, введите действительное положительное целое число." << endl << endl << "Введите количество слов в предложении: ";
        }
        else if (targetWordCount <= 0)
        {
            cout << "Вы ввели некорректное число. Пожалуйста, введите действительное положительное целое число." << endl << endl << "Введите количество слов в предложении: ";
        }
        else
        {
            break;
        }
    }
    system("cls");
    ifstream inputFile(fileName);

    inputFile.seekg(0, inputFile.end); // Определение размера файла
    long fileSize = inputFile.tellg();
    char* fileContent = new char[fileSize + 1]; // Создание буфера для хранения содержимого файла
    inputFile.seekg(0, inputFile.beg); // Возврат к началу файла
    inputFile.read(fileContent, fileSize); // Чтение содержимого файла
    fileContent[fileSize] = '\0';

    charactersearchFunction(fileContent, targetWordCount);

    inputFile.close();

    delete[] fileContent;
}
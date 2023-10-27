#include "Libraries.h"
#include "Function_Prototypes.h"

void basis3()
{
    setlocale(LC_ALL, "RU");

    char menu3 ;
    const char* fileName = "text.txt";
    ifstream inputFile(fileName);

    //Проверка условий
    if (!checkFileConditions(fileName, inputFile))
    {
        return;
    }
    system("cls");
    while (true)
    {    
        cout << "Какую задачу вы хотите решить? : " << endl << endl
            << "Cчитать текст из файла и вывести на экран только предложения, состоящие из заданного количества слов. ----> 1" << endl
            << "Выбрать другую задачу -----> 0" << endl << endl;
        
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
            cout << "Вы ввели неверный пункт меню! Попробуйте ещё раз." << endl<< endl;

        }
    }
    _getch();
}
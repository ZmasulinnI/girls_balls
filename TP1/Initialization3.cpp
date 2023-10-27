#include "Function_Prototypes.h"
#include "Libraries.h"

int initialization3(int targetWordCount, const char* fileName)
{
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
            cout << "Неверный ввод. Пожалуйста, введите действительное положительное целое число." << endl << endl << "Введите количество слов в предложении: " ;
        }
        else
        {
            break;
        }
    }

    return targetWordCount;
}
#include "Libraries.h"

float initialization2(int i, int j)
{
    float n = 0;
    for (;;)
    {
        cin >> n;
        cout << endl;
        // Проверка на ошибку ввода
        if (cin.fail() || (cin.get() != '\n'))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистка буфера
            cout << "Неверный ввод. Пожалуйста, введите другое число." << endl << endl << "Элемент[" << i + 1 << "][" << j + 1 << "]: ";;
        }
        else
        {
            break;
        }
    }

    return n;
}
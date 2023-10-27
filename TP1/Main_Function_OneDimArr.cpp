#include "Libraries.h"
#include "Function_Prototypes.h"

void basis1()
{
    setlocale(LC_ALL, "Russian");
    int n;
    system("cls");
    while (true) // цикл отвечает за ввод размерности 
    {
        cout << "Введите размер массива: ";
        cin >> n;
        cout << endl;
        // Проверка на ошибку ввода
        if (cin.fail() || (cin.get() != '\n'))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистка буфера
            cout << "Неверный ввод. Пожалуйста, введите действительное положительное целое число."<< endl<< endl;
        }
        else if (n < 1)
        {
            cout << "Матрица стоит из недостаточного количества элементов. Попробуйте ввести данные размерности более 1" << endl;
 
            continue;
        }
        else
        {
            break;
        }
    }

    // Вызов функций и вывод результатов
    double* arr = enter_Data(n);
    double* newArr = move_zeros_to_end(arr, n);

    OneDimmenu(n, arr, newArr);

    // Освобождение памяти, выделенной для массива
    delete[] arr;
    delete[] newArr;

} 
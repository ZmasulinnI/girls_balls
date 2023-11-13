#include "Libraries.h"
#include "Function_Prototypes.h"
void basis2()
{
    setlocale(LC_ALL, "Russian");
    int result;
    int n = 0;


    cout << "Какие задачи вы сможете решить:  " << endl << endl
        << "1.Сглаживание матрицы" << endl
        << "2.Нахождение суммы модулей элементов, расположенных ниже главное диагонали  " << endl << endl;


    while (true)
    {
        while (true) //цикл отвечает за ввод размерности матрицы, он должен быть не меньше 2х2
        {
            cout << "Введите размер матрицы: ";
            cin >> n;
            cout << endl;
            // Проверка на ошибку ввода
            if (cin.fail() || (cin.get() != '\n'))
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистка буфера
                cout << "Неверный ввод. Пожалуйста, введите действительное положительное целое число." << endl;
            }
            else if (n <= 1)
            {
                cout << "Матрица стоит из недостаточного количества элементов. Попробуйте ввести данные размерности больше 1" << endl;

                continue;
            }
            else
            {
                break;
            }
        }
        float** matrix = new float* [n]; //создание первичного массива
        for (int i = 0; i < n; i++)
        {
            matrix[i] = new float[n];
        }

        Entering_array_elements(n, matrix);
        result = TwoDimmenu(matrix, n);

        delete_matrix(matrix, n);

        if (result == 0) return;
    }
}
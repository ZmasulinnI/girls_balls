#include "Libraries.h"
#include "Function_Prototypes.h"
void basis2()
{
    setlocale(LC_ALL, "Russian");
    int n = 0;
    bool allEqual = true; //переменная отвечат за то, что все переменные не будут равны 0
    float sum;

    while (true) // цикл отвечает за ввод размерности цикл отвечает за ввод размерности матрицы, он должен быть не меньше 2х2
    {
        cout << "Введите размер матрицы: ";
        cin >> n;
        cout << endl;
        // Проверка на ошибку ввода
        if (cin.fail() || (cin.get() != '\n'))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистка буфера
            cout << "Неверный ввод. Пожалуйста, введите действительное положительное целое число." << endl  ;
        }
        else if (n <= 1)
        {
            cout << "Матрица стоит из недостаточного количества элементов. Попробуйте ввести данные размерности более 1" << endl;

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

    float** smoothedMatrix = new float* [n]; //создание вторичного массива
    for (int i = 0; i < n; i++)
    {
        smoothedMatrix[i] = new float[n];
    }

    Entering_array_elements(allEqual, n, matrix);
    Сhecking_that_not_zero(n, matrix, allEqual);
    sum = Sum_of_modules_below_the_main_diagonal(n, matrix);
    TwoDimmenu(matrix, smoothedMatrix, n, sum);
    delete_matrix(matrix, n);
    delete_matrix(smoothedMatrix, n);
}
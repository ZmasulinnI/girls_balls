#include "Libraries.h"
#include "Function_Prototypes.h"

void Сhecking_that_not_zero(int n, float** matrix, bool& allEqual)
{
    if (!allEqual)
    {
        cout << "Все элементы матрицы равны 0, сглаженная матрица будет равна исходной." << endl << "Введите другие элементы матрицы " << n << "x" << n << endl;
        for (int i = 0; i < n; i++) //ввод значений в матрицу заново, если все элементы равны 0
        {
            for (int j = 0; j < n; j++)
            {
                cout << "Элемент[" << i + 1 << "][" << j + 1 << "]: ";
                cin >> matrix[i][j];
            }
        }
    }
}
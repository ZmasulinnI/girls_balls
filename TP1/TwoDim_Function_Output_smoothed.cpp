#include "Libraries.h"
#include "Function_Prototypes.h"

void Output_smoothed_matrix(int n, float** matrix) { //

    float** smoothedMatrix = new float* [n]; //создание вторичного массива
    for (int i = 0; i < n; i++)
    {
        smoothedMatrix[i] = new float[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0) continue;
            if (matrix[0][0] == matrix[i][j])
            {
                cout << "Все элементы матрицы равны, сглаженная матрица будет равна исходной." << endl;
                return;
            }
        }
    }

    Smoothing_the_matrix(n, matrix, smoothedMatrix);

    cout << "Результат сглаживания:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << smoothedMatrix[i][j] << " ";
        }
        cout << endl;
    }
}
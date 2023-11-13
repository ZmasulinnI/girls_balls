#include "Libraries.h"
#include "Function_Prototypes.h"

void Smoothing_the_matrix(int n, float** matrix, float** smoothedMatrix) //сглаживание матрицы производится здесь 
{
    for (int i = 0, k = 0; i < n, k < n; i++, k++) //Задание 1 -----  пропишем условия, какие элементы мы берем для сглаживания определененного элемента
    {
        for (int j = 0, l = 0; j < n, l < n; j++, l++)
        {
            if (i == 0)
            {
                if (j == 0)
                {
                    smoothedMatrix[k][l] = (matrix[i][j + 1] + matrix[i + 1][j]) / 2;
                }
            }
            if (i == 0)
            {
                if (j > 0 && i < (n - 1))
                {
                    smoothedMatrix[k][l] = (matrix[i][j + 1] + matrix[i][j - 1] + matrix[i + 1][j]) / 3;
                }
            }
            if (i == 0)
            {
                if (j == (n - 1))
                {
                    smoothedMatrix[k][l] = (matrix[i][j - 1] + matrix[i + 1][j]) / 2;
                }
            }
            if (i > 0 && i < (n - 1))
            {
                if (j == 0)
                {
                    smoothedMatrix[k][l] = (matrix[i][j + 1] + matrix[i - 1][j] + matrix[i + 1][j]) / 3;
                }
            }
            if (i > 0 && i < (n - 1))
            {
                if (j > 0 && j < (n - 1))
                {
                    smoothedMatrix[k][l] = (matrix[i][j + 1] + matrix[i][j - 1] + matrix[i - 1][j] + matrix[i + 1][j]) / 4;
                }
            }
            if (i > 0 && i < (n - 1))
            {
                if (j == (n - 1))
                {
                    smoothedMatrix[k][l] = (matrix[i][j - 1] + matrix[i - 1][j] + matrix[i + 1][j]) / 3;
                }
            }
            if (i == (n - 1))
            {
                if (j == 0)
                {
                    smoothedMatrix[k][l] = (matrix[i][j + 1] + matrix[i - 1][j]) / 2;
                }
            }
            if (i == (n - 1))
            {
                if (j > 0 && j < (n - 1))
                {
                    smoothedMatrix[k][l] = (matrix[i][j + 1] + matrix[i][j - 1] + matrix[i - 1][j]) / 3;
                }
            }
            if (i == (n - 1))
            {
                if (j == (n - 1))
                {
                    smoothedMatrix[k][l] = (matrix[i][j - 1] + matrix[i - 1][j]) / 2;
                }
            }
        }
    }

    return;
}
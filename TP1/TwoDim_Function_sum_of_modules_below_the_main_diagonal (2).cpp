#include "Libraries.h"
#include "Function_Prototypes.h"

float Sum_of_modules_below_the_main_diagonal(int n, float** matrix) // Вывод на задние 2 подзадание 2
{
    float sum = 0;

    if (n >= 3)
    {
        for (int k = 0; k < n; k++)
        {
            for (int l = 0; l < n; l++)
            {
                if (l < k)
                {
                    sum += fabs(matrix[k][l]);
                }
            }
        }
    }

    return sum;
}
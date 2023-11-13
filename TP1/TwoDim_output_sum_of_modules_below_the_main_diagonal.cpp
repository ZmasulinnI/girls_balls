#include "Libraries.h"
#include "Function_Prototypes.h"

void output_sum_of_modules_below_the_main_diagonal(int n, float** matrix)
{
    float sum = 0;
    if (n == 2)
    {
        cout << "Матрица состоит из четырех элементов, сумму модулей элементов, расположенных ниже главной диагонали, не удастся вычислить, так как в этой позиции только один элемент." << endl;
    }
    else
    {
        sum = Sum_of_modules_below_the_main_diagonal(n, matrix);
        cout << "Сумма модулей элементов, расположенных ниже главной диагонали: " << sum << endl;
    }
}
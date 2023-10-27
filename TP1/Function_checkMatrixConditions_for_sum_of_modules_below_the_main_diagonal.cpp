#include "Libraries.h"
#include "Function_Prototypes.h"

void checkMatrixConditions_for_sum_of_modules_below_the_main_diagonal(int n)
{
    if (n == 1)
    {
        cout << "Матрица состоит из одного элемента, сумму модулей элементов, расположенных ниже главной диагонали, не удастся вычислить." << endl;
    }
    else if (n == 2)
    {
        cout << "Матрица состоит из четырех элементов, сумму модулей элементов, расположенных ниже главной диагонали, не удастся вычислить, так как в этой позиции только один элемент." << endl;
    }
}
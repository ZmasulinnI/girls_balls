#include "Libraries.h"
#include "Function_Prototypes.h"

void output_sum_of_modules_below_the_main_diagonal(int n, float sum)
{
    //проверка условий
    checkMatrixConditions_for_sum_of_modules_below_the_main_diagonal(n);

    if (n >= 3)
    {
        cout << "Сумма модулей элементов, расположенных ниже главное диагонали: " << sum << endl;
    }
}
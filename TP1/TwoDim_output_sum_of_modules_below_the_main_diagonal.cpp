#include "Libraries.h"
#include "Function_Prototypes.h"

void output_sum_of_modules_below_the_main_diagonal(int n, float sum)
{
    //�������� �������
    checkMatrixConditions_for_sum_of_modules_below_the_main_diagonal(n);

    if (n >= 3)
    {
        cout << "����� ������� ���������, ������������� ���� ������� ���������: " << sum << endl;
    }
}
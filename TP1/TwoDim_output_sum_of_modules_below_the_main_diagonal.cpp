#include "Libraries.h"
#include "Function_Prototypes.h"

void output_sum_of_modules_below_the_main_diagonal(int n, float** matrix)
{
    float sum = 0;
    if (n == 2)
    {
        cout << "������� ������� �� ������� ���������, ����� ������� ���������, ������������� ���� ������� ���������, �� ������� ���������, ��� ��� � ���� ������� ������ ���� �������." << endl;
    }
    else
    {
        sum = Sum_of_modules_below_the_main_diagonal(n, matrix);
        cout << "����� ������� ���������, ������������� ���� ������� ���������: " << sum << endl;
    }
}
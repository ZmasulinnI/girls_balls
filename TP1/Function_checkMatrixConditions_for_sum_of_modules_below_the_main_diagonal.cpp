#include "Libraries.h"
#include "Function_Prototypes.h"

void checkMatrixConditions_for_sum_of_modules_below_the_main_diagonal(int n)
{
    if (n == 1)
    {
        cout << "������� ������� �� ������ ��������, ����� ������� ���������, ������������� ���� ������� ���������, �� ������� ���������." << endl;
    }
    else if (n == 2)
    {
        cout << "������� ������� �� ������� ���������, ����� ������� ���������, ������������� ���� ������� ���������, �� ������� ���������, ��� ��� � ���� ������� ������ ���� �������." << endl;
    }
}
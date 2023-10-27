#include "Libraries.h"
#include "Function_Prototypes.h"

// ������� ��� �������������� ������� ���, ����� ��������, ������ ����, ������������� ����� ���� ���������
double* move_zeros_to_end(double* arr, int n)
{
    int zero_count = 0;
    int nonzero_index = 0;
    system("cls");

    double* newArr = new double[n];

    // ����������� ��������� ��������� � ����� ������
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            newArr[nonzero_index++] = arr[i];
        }
    }

    //�������� �������
    if (!check_conditions_for_move_zeros_to_end(nonzero_index, n, arr))
    {
        return 0;
    }

    // ���������� ����� ������� ������
    for (int i = nonzero_index; i < n; i++)
    {
        newArr[i] = 0;
    }

    return newArr;
}

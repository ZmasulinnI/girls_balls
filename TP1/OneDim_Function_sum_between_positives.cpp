#include "Libraries.h"
#include "Function_Prototypes.h"

// ������� ��� ���������� ����� ��������� ����� ������ � ������ �������������� ����������
double sum_between_positives(double* arr, int n, int& first_pos, int& last_pos)
{
    first_pos = -1;
    last_pos = -1;
    double sum = 0;
    system("cls");

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            if (first_pos == -1)
            {
                first_pos = i;
            }
            else if (last_pos == -1)
            {
                last_pos = i;
                break;
            }
        }
    }
    //�������� �������
    if (!check_conditions_for_sum_between_positives(arr, first_pos, last_pos, n))
    {
        return 0;
    }


    // ������ �����
    for (int i = first_pos + 1; i < last_pos; i++) //!
    {
        sum += arr[i];
    }
    return sum;
}
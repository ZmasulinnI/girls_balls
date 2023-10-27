#include "Libraries.h"
#include "Function_Prototypes.h"

bool check_conditions_for_move_zeros_to_end(int nonzero_index, int n, double* arr)
{
    // ���� ��� �������� ������� ����� ����, ������� ��������� � ��������� ������ ��� ���������
    if (nonzero_index == 0)
    {
        Displaying_array_on_the_screen(arr, n);
        cout << "��� �������� ������� ����� ����, ������ �� ���������." << endl;
        return false;
    }

    // ���� ��� ������� ���������, ������� ��������� � ��������� ������ ��� ���������
    if (nonzero_index == n)
    {
        Displaying_array_on_the_screen(arr, n);
        cout << "� ������� ����������� ������� ��������, ������ �� ���������." << endl;
        return false;
    }
    return true;
}
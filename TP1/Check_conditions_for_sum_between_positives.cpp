#include "Libraries.h"
#include "Function_Prototypes.h"

bool check_conditions_for_sum_between_positives(double* arr, int first_pos, int last_pos, int n)
{
    if (first_pos == -1 && last_pos == -1)
    {
        Displaying_array_on_the_screen(arr, n);
        cout << "� ������� ��� ������������� ���������, ����� ����� �� �������." << endl << endl;
        return false;
    }

    if (first_pos == -1 || last_pos == -1)
    {
        Displaying_array_on_the_screen(arr, n);
        cout << "� ������� ������ ���� ������������� �������, ����� ����� �� �������." << endl << endl;
        return false;
    }

    if (first_pos == last_pos - 1)
    {
        Displaying_array_on_the_screen(arr, n);
        cout << "������������� �������� � ������� ��������� ���� �� ������, ����� ����� �� �������." << endl << endl;
        return false;
    }
    // �������� �� ������� ������ �������������� �������� ��� ���� ����� �������������� ����������
    if (last_pos - first_pos == 2)
    {
        Displaying_array_on_the_screen(arr, n);
        cout << "����� ������ � ������ �������������� ���������� ������� ��������� ������ ���� �������, ����� ����� �� �������." << endl << endl;
        return false;
    }
    return true;
}
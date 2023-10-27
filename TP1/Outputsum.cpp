#include "Libraries.h"
#include "Function_Prototypes.h"

double outputsum(int n, double* arr)
{
    int first_pos, last_pos;
    // ���������� ����� ��������� ����� ������ � ������ �������������� ����������
    double sum = sum_between_positives(arr, n, first_pos, last_pos);

    // �������� �� ���������� �����
    if (sum != 0 || ((last_pos - first_pos) > 2 && sum == 0)) 
    {
        Displaying_array_on_the_screen(arr, n);
        cout << "����� ��������� ����� ������ � ������ �������������� ����������: " << sum << endl;
        cout << "������� ������� �������������� ��������: " << first_pos  << endl; // +1 � ������� ����� �������
        cout << "������� ������� �������������� ��������: " << last_pos  << endl << endl; // +1 � ������� ����� �������
    }
    return sum;
}
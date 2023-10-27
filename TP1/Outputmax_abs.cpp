#include "Libraries.h"
#include "Function_Prototypes.h"

void outputmax_abs(int n, double* arr) //������� ������ ����.���������
{
    int count;
    int* positions = nullptr;
    double max_abs;

    count = function_count(arr, n);
    max_abs = function_max_abs(arr, n);

    positions = position_max_abs_element(arr, n, count, max_abs);

    Displaying_array_on_the_screen(arr, n);
    cout << "������������ �� ������ �������: " << max_abs << endl;
    cout << "���������� ����� ���������: " << count << endl;
    cout << "�� �������: ";
    for (int i = 0; i < count; i++)
    {
        cout << positions[i] << " ";
    }
    cout << endl << endl;

    delete[] positions;
}
#include "Libraries.h"
#include "Function_Prototypes.h"

void Entering_array_elements(/*bool& allEqual,*/ int n, float** matrix)
{
    setlocale(LC_ALL, "Russian");
    cout << "������� �������� ������� � ����������� � �� ���������: " << endl;
    for (int i = 0; i < n; i++) //���� �������� � �������
    {
        for (int j = 0; j < n; j++)
        {
            cout << "�������[" << i + 1 << "][" << j + 1 << "]: ";
            matrix[i][j] = initialization2(i, j);
            // if (matrix[i][j] == 0)
            // {
            //     allEqual = false;
            // }
        }
    }
}
#include "Libraries.h"
#include "Function_Prototypes.h"

void �hecking_that_not_zero(int n, float** matrix, bool& allEqual)
{
    if (!allEqual)
    {
        cout << "��� �������� ������� ����� 0, ���������� ������� ����� ����� ��������." << endl << "������� ������ �������� ������� " << n << "x" << n << endl;
        for (int i = 0; i < n; i++) //���� �������� � ������� ������, ���� ��� �������� ����� 0
        {
            for (int j = 0; j < n; j++)
            {
                cout << "�������[" << i + 1 << "][" << j + 1 << "]: ";
                cin >> matrix[i][j];
            }
        }
    }
}
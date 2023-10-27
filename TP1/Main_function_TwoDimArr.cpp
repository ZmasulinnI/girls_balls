#include "Libraries.h"
#include "Function_Prototypes.h"
void basis2()
{
    setlocale(LC_ALL, "Russian");
    int n = 0;
    bool allEqual = true; //���������� ������� �� ��, ��� ��� ���������� �� ����� ����� 0
    float sum;

    while (true) // ���� �������� �� ���� ����������� ���� �������� �� ���� ����������� �������, �� ������ ���� �� ������ 2�2
    {
        cout << "������� ������ �������: ";
        cin >> n;
        cout << endl;
        // �������� �� ������ �����
        if (cin.fail() || (cin.get() != '\n'))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ������� ������
            cout << "�������� ����. ����������, ������� �������������� ������������� ����� �����." << endl  ;
        }
        else if (n <= 1)
        {
            cout << "������� ����� �� �������������� ���������� ���������. ���������� ������ ������ ����������� ����� 1" << endl;

            continue;
        }
        else
        {
            break;
        }
    }
 
    float** matrix = new float* [n]; //�������� ���������� �������
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new float[n];
    }

    float** smoothedMatrix = new float* [n]; //�������� ���������� �������
    for (int i = 0; i < n; i++)
    {
        smoothedMatrix[i] = new float[n];
    }

    Entering_array_elements(allEqual, n, matrix);
    �hecking_that_not_zero(n, matrix, allEqual);
    sum = Sum_of_modules_below_the_main_diagonal(n, matrix);
    TwoDimmenu(matrix, smoothedMatrix, n, sum);
    delete_matrix(matrix, n);
    delete_matrix(smoothedMatrix, n);
}
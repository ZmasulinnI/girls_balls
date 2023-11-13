#include "Libraries.h"
#include "Function_Prototypes.h"
void basis2()
{
    setlocale(LC_ALL, "Russian");
    int result;
    int n = 0;


    cout << "����� ������ �� ������� ������:  " << endl << endl
        << "1.����������� �������" << endl
        << "2.���������� ����� ������� ���������, ������������� ���� ������� ���������  " << endl << endl;


    while (true)
    {
        while (true) //���� �������� �� ���� ����������� �������, �� ������ ���� �� ������ 2�2
        {
            cout << "������� ������ �������: ";
            cin >> n;
            cout << endl;
            // �������� �� ������ �����
            if (cin.fail() || (cin.get() != '\n'))
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ������� ������
                cout << "�������� ����. ����������, ������� �������������� ������������� ����� �����." << endl;
            }
            else if (n <= 1)
            {
                cout << "������� ����� �� �������������� ���������� ���������. ���������� ������ ������ ����������� ������ 1" << endl;

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

        Entering_array_elements(n, matrix);
        result = TwoDimmenu(matrix, n);

        delete_matrix(matrix, n);

        if (result == 0) return;
    }
}
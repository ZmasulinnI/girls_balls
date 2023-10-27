#include "Libraries.h"
#include "Function_Prototypes.h"

void basis1()
{
    setlocale(LC_ALL, "Russian");
    int n;
    system("cls");
    while (true) // ���� �������� �� ���� ����������� 
    {
        cout << "������� ������ �������: ";
        cin >> n;
        cout << endl;
        // �������� �� ������ �����
        if (cin.fail() || (cin.get() != '\n'))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ������� ������
            cout << "�������� ����. ����������, ������� �������������� ������������� ����� �����."<< endl<< endl;
        }
        else if (n < 1)
        {
            cout << "������� ����� �� �������������� ���������� ���������. ���������� ������ ������ ����������� ����� 1" << endl;
 
            continue;
        }
        else
        {
            break;
        }
    }

    // ����� ������� � ����� �����������
    double* arr = enter_Data(n);
    double* newArr = move_zeros_to_end(arr, n);

    OneDimmenu(n, arr, newArr);

    // ������������ ������, ���������� ��� �������
    delete[] arr;
    delete[] newArr;

} 
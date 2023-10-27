#include "Libraries.h"

double initialization(int i)
{
    double n = 0;
    for (;;)
    {
        cin >> n;
        cout << endl;
        // �������� �� ������ �����
        if (cin.fail() || (cin.get() != '\n'))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ������� ������
            cout << "�������� ����. ����������, ������� ������ �����." << endl << endl
            << "[" << i + 1 << "]" << " - ";
        }
        else
        {
            break;
        }
    }

    return n;
}
#include "Libraries.h"

float initialization2(int i, int j)
{
    float n = 0;
    for (;;)
    {
        cin >> n;
        cout << endl;
        // �������� �� ������ �����
        if (cin.fail() || (cin.get() != '\n'))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ������� ������
            cout << "�������� ����. ����������, ������� ������ �����." << endl << endl << "�������[" << i + 1 << "][" << j + 1 << "]: ";;
        }
        else
        {
            break;
        }
    }

    return n;
}
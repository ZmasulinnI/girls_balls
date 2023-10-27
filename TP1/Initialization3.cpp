#include "Function_Prototypes.h"
#include "Libraries.h"

int initialization3(int targetWordCount, const char* fileName)
{
    cout << "������� ���������� ���� � �����������: ";
    
    for (;;)
    {
        cin >> targetWordCount;
        cout << endl;
        // �������� �� ������ �����
        if (cin.fail() || (cin.get() != '\n'))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ������� ������
            cout << "�������� ����. ����������, ������� �������������� ������������� ����� �����." << endl << endl << "������� ���������� ���� � �����������: " ;
        }
        else
        {
            break;
        }
    }

    return targetWordCount;
}
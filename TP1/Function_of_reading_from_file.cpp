#include "Libraries.h"
#include "Function_Prototypes.h"

// ������� ��� ��������� ����������� � �����
void processSentencesInFile(const char* fileName)
{
    int targetWordCount;
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
            cout << "�������� ����. ����������, ������� �������������� ������������� ����� �����." << endl << endl << "������� ���������� ���� � �����������: ";
        }
        else if (targetWordCount <= 0)
        {
            cout << "�� ����� ������������ �����. ����������, ������� �������������� ������������� ����� �����." << endl << endl << "������� ���������� ���� � �����������: ";
        }
        else
        {
            break;
        }
    }
    system("cls");
    ifstream inputFile(fileName);

    inputFile.seekg(0, inputFile.end); // ����������� ������� �����
    long fileSize = inputFile.tellg();
    char* fileContent = new char[fileSize + 1]; // �������� ������ ��� �������� ����������� �����
    inputFile.seekg(0, inputFile.beg); // ������� � ������ �����
    inputFile.read(fileContent, fileSize); // ������ ����������� �����
    fileContent[fileSize] = '\0';

    charactersearchFunction(fileContent, targetWordCount);

    inputFile.close();

    delete[] fileContent;
}
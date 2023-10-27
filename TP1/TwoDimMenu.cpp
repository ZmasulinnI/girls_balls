#include "Libraries.h"
#include "Function_Prototypes.h"

void TwoDimmenu(float** matrix, float** smoothedMatrix, int n, float sum)
{
    char actions;
    system("cls");

    while (true)
    {
        
        cout << "����� ������ �� ������ ������? : " << endl << endl 
            << "����������� ������� ---------------------------------------------------------> 1" << endl
            << "���������� ����� ������� ���������, ������������� ���� ������� ��������� ----> 2 " << endl
            << "�������� �������� ������� ---------------------------------------------------> 3" << endl<< endl
            << "������� ������ ������ -------------------------------------------------------> 0" << endl << endl;
        
        cin >> actions;
        system("cls");
        switch (actions)
        {
        case '1':
            Matrix_now(n, matrix);
            Output_smoothed_matrix(n, matrix, smoothedMatrix);
            break;
        case '2':
            Matrix_now(n, matrix);
            output_sum_of_modules_below_the_main_diagonal(n, sum);
            break;
        case '3':
            basis2();
            break;
        case '0':
            system("cls");
            return;
        default:
            cout << "�� ����� �������� ����� ����! ���������� ��� ���" << endl<<endl;
        }
    }
}
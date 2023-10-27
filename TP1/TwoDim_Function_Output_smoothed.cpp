#include "Libraries.h"
#include "Function_Prototypes.h"

void  Output_smoothed_matrix(int n, float** matrix, float** smoothedMatrix) { // ����� ���������� �������

    smoothedMatrix = Smoothing_the_matrix(n, matrix, smoothedMatrix);

    cout << "��������� �����������:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << smoothedMatrix[i][j] << " ";
        }
        cout << endl;
    }
}
#include "Libraries.h"
#include "Function_Prototypes.h"

void Matrix_now(int n, float** matrix) { // ����� �������
    cout << "���� �������: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
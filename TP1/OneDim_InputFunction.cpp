#include "Libraries.h"
#include "Function_Prototypes.h"

// Функция для ввода одномерного массива
double* enter_Data(int n)
{
    system("cls");
    cout << "Введите элементы одномерного массива:" << endl;
    
    double* arr = new double[n];
    for (int i = 0; i < n; i++)
    {
        cout << "[" << i + 1 << "]" << " - ";
        arr[i] = initialization(i);
    }
    return arr;
}
#include "Libraries.h"
#include "Function_Prototypes.h"

// Функция для вычисления максимального по модулю элемента массива
int* position_max_abs_element(double* arr, int n, int count, double max_abs)
{
    int index = 0;
    double abs_value;
    system("cls");

    int* positions = nullptr;

    positions = new int[count];
    for (int i = 0; i < n; i++)
    {
        abs_value = abs(arr[i]);

        if (abs_value == max_abs)
        {
            positions[index] = i + 1;
            index++;
        }
    }

    return positions;
}

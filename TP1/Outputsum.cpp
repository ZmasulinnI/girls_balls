#include "Libraries.h"
#include "Function_Prototypes.h"

double outputsum(int n, double* arr)
{
    int first_pos, last_pos;
    // Вычисление суммы элементов между первым и вторым положительными элементами
    double sum = sum_between_positives(arr, n, first_pos, last_pos);

    // Проверка на отсутствие суммы
    if (sum != 0 || ((last_pos - first_pos) > 2 && sum == 0)) 
    {
        Displaying_array_on_the_screen(arr, n);
        cout << "Сумма элементов между первым и вторым положительными элементами: " << sum << endl;
        cout << "Позиция первого положительного элемента: " << first_pos  << endl; // +1 к позиции перед выводом
        cout << "Позиция второго положительного элемента: " << last_pos  << endl << endl; // +1 к позиции перед выводом
    }
    return sum;
}
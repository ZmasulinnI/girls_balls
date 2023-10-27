#include "Libraries.h"
#include "Function_Prototypes.h"

bool check_conditions_for_sum_between_positives(double* arr, int first_pos, int last_pos, int n)
{
    if (first_pos == -1 && last_pos == -1)
    {
        Displaying_array_on_the_screen(arr, n);
        cout << "В массиве нет положительных элементов, найти сумму не удастся." << endl << endl;
        return false;
    }

    if (first_pos == -1 || last_pos == -1)
    {
        Displaying_array_on_the_screen(arr, n);
        cout << "В массиве только один положительный элемент, найти сумму не удастся." << endl << endl;
        return false;
    }

    if (first_pos == last_pos - 1)
    {
        Displaying_array_on_the_screen(arr, n);
        cout << "Положительные элементы в массиве находятся друг за другом, найти сумму не удастся." << endl << endl;
        return false;
    }
    // Проверка на наличие одного отрицательного элемента или нуля между положительными элементами
    if (last_pos - first_pos == 2)
    {
        Displaying_array_on_the_screen(arr, n);
        cout << "Между первым и вторым положительными элементами массива находится только один элемент, найти сумму не удастся." << endl << endl;
        return false;
    }
    return true;
}
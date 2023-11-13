#include "Libraries.h"
#include "Function_Prototypes.h"

void outputsum(int n, double* arr)
{
    int first_pos, last_pos;
    // Вычисление суммы элементов между первым и вторым положительными элементами

    first_pos = -1;
    last_pos = -1;
    double sum = 0;
    system("cls");

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            if (first_pos == -1)
            {
                first_pos = i;
            }
            else if (last_pos == -1)
            {
                last_pos = i;
                break;
            }
        }
    }
    //Проверка условий
    if (!check_conditions_for_sum_between_positives(arr, first_pos, last_pos, n))
    {
        return;
    }

    // Расчет суммы
    for (int i = first_pos + 1; i < last_pos; i++) //!
    {
        sum += arr[i];
    }

    Displaying_array_on_the_screen(arr, n);
    cout << "Сумма элементов между первым и вторым положительными элементами: " << sum << endl;
    cout << "Позиция первого положительного элемента: " << first_pos << endl; // +1 к позиции перед выводом
    cout << "Позиция второго положительного элемента: " << last_pos << endl << endl; // +1 к позиции перед выводом
    return;
}
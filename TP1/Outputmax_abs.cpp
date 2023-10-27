#include "Libraries.h"
#include "Function_Prototypes.h"

void outputmax_abs(int n, double* arr) //функция вывода макс.элементов
{
    int count;
    int* positions = nullptr;
    double max_abs;

    count = function_count(arr, n);
    max_abs = function_max_abs(arr, n);

    positions = position_max_abs_element(arr, n, count, max_abs);

    Displaying_array_on_the_screen(arr, n);
    cout << "Максимальный по модулю элемент: " << max_abs << endl;
    cout << "Количество таких элементов: " << count << endl;
    cout << "Их позиции: ";
    for (int i = 0; i < count; i++)
    {
        cout << positions[i] << " ";
    }
    cout << endl << endl;

    delete[] positions;
}
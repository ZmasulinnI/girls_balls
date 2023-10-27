#include "Libraries.h"
#include "Function_Prototypes.h"

bool check_conditions_for_move_zeros_to_end(int nonzero_index, int n, double* arr)
{
    // ≈сли все элементы массива равны нулю, выводим сообщение и оставл€ем массив без изменений
    if (nonzero_index == 0)
    {
        Displaying_array_on_the_screen(arr, n);
        cout << "¬се элементы массива равны нулю, массив не изменитс€." << endl;
        return false;
    }

    // ≈сли нет нулевых элементов, выводим сообщение и оставл€ем массив без изменений
    if (nonzero_index == n)
    {
        Displaying_array_on_the_screen(arr, n);
        cout << "¬ массиве отсутствуют нулевые элементы, массив не изменитс€." << endl;
        return false;
    }
    return true;
}
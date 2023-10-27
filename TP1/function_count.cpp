#include "Libraries.h"
#include "Function_Prototypes.h"

int function_count(double* arr, int n)
{
    int max_abs = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        double abs_value = abs(arr[i]);

        if (abs_value > max_abs)
        {
            max_abs = abs_value;
            count = 1;
        }
        else if (abs_value == max_abs)
        {
            count++;
        }
    }
    return count;
}

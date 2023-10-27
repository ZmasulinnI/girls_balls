#include "Libraries.h"
#include "Function_Prototypes.h"

int function_max_abs(double* arr, int n)
{
    int max_abs = 0;
    for (int i = 0; i < n; i++)
    {
        double abs_value = abs(arr[i]);

        if (abs_value > max_abs)
        {
            max_abs = abs_value;
        }
    }
    return max_abs;
}

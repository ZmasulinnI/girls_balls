#include "Libraries.h"
#include "Function_Prototypes.h"

int function_count(double* arr, int n)
{
    int max_abs = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (abs(arr[i]) > max_abs)
        {
            max_abs = abs(arr[i]);
            count = 1;
        }
        else if (abs(arr[i]) == max_abs)
        {
            count++;
        }
    }
    return count;
}

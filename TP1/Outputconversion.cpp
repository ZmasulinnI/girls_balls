#include "Libraries.h"
#include "Function_Prototypes.h"

double* outputconversion(int n, double* arr)
{
    double* newArr = move_zeros_to_end(arr, n);

    if (newArr != 0) 
    {
        Displaying_array_on_the_screen(arr, n);
        cout << "Массив после преобразования: ";
        for (int i = 0; i < n; i++)
        {
            cout << newArr[i] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    return newArr;
}
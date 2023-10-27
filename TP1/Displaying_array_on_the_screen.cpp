#include "Libraries.h"
#include "Function_Prototypes.h"

void Displaying_array_on_the_screen(const double* arr, int n)
{
	cout << "Ваш массив: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
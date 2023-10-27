#include "Libraries.h"
#include "Function_Prototypes.h"

void delete_matrix(float** matrix, int n)
{
    for (int i = 0; i < n; ++i)
        delete matrix[i];
    delete[] matrix;
}
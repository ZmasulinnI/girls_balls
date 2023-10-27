#include "Libraries.h"
#include "Function_Prototypes.h"

bool isFileEmpty(const char* fileName) 
{
    ifstream file(fileName);
    return file.peek() == EOF;
}

bool fileExists(const char* fileName) 
{
    ifstream file(fileName);
    return file.good();
}
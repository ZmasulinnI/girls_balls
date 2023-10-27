#pragma once
#ifndef FUNCTION_PROTOTYPES
#define FUNCTION_PROTOTYPES
#include "Libraries.h"

//Common menu
int main();
void mainMenu();

//One Dimention menu
void OneDimmenu(int n, double* arr, double* newArr);
void basis1();
double initialization(int i);

//One Dimention task
double* enter_Data(int n);
void Displaying_array_on_the_screen(const double* arr, int n);
int function_count(double* arr, int n);
int function_max_abs(double* arr, int n);
int* position_max_abs_element(double* arr, int n, int count, double max_abs);
double sum_between_positives(double* arr, int n, int& first_pos, int& last_pos);
bool check_conditions_for_sum_between_positives(double* arr, int first_pos, int last_pos, int n);
double* move_zeros_to_end(double* arr, int n);
bool check_conditions_for_move_zeros_to_end(int nonzero_index, int n, double* arr);
void outputmax_abs(int n, double* arr);
double outputsum(int n, double* arr);
double* outputconversion(int n, double* arr);

//Two Dimention menu
float initialization2(int i, int j);
void TwoDimmenu(float** matrix, float** smoothedMatrix, int n, float sum);
void Entering_array_elements(bool& allEqual, int n, float** matrix);
void delete_matrix(float** matrix, int n);
void basis2();
int main();

//Two Dimention task
void Matrix_now(int n, float** matrix);
void Ñhecking_that_not_zero(int n, float** matrix, bool& allEqual);
float** Smoothing_the_matrix(int n, float** matrix, float** smoothedMatrix);
void Output_smoothed_matrix(int n, float** matrix, float** smoothedMatrix);
float Sum_of_modules_below_the_main_diagonal(int n, float** matrix);
void output_sum_of_modules_below_the_main_diagonal(int n, float sum);
void checkMatrixConditions_for_sum_of_modules_below_the_main_diagonal(int n);

//ReadFile three task
int initialization3(int targetWordCount, const char* fileName);
void basis3();
bool isFileEmpty(const char* fileName);
bool fileExists(const char* fileName);
bool checkFileConditions(const char* fileName, ifstream& inputFile);
void processSentencesInFile(const char* fileName);
int charactersearchFunction(const char* fileContent, int targetWordCount);

#endif
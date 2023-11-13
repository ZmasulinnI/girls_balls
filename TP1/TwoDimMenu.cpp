#include "Libraries.h"
#include "Function_Prototypes.h"

int TwoDimmenu(float** matrix, int n)
{
    char actions;
    system("cls");

    while (true)
    {

        cout << "Какую задачу вы хотите решить? : " << endl << endl
            << "Сглаживание матрицы ---------------------------------------------------------> 1" << endl
            << "Нахождение суммы модулей элементов, расположенных ниже главное диагонали ----> 2 " << endl
            << "Изменить значение массива ---------------------------------------------------> 3" << endl << endl
            << "Выбрать другую задачу -------------------------------------------------------> 0" << endl << endl;

        cin >> actions;
        system("cls");
        switch (actions)
        {
        case '1':
            Matrix_now(n, matrix);
            Output_smoothed_matrix(n, matrix);
            break;
        case '2':
            Matrix_now(n, matrix);
            output_sum_of_modules_below_the_main_diagonal(n, matrix);
            break;
        case '3':
            return 3;
        case '0':
            system("cls");
            return 0;
        default:
            cout << "Вы ввели неверный пункт меню! Попробуйте еще раз" << endl << endl;
        }
    }
}
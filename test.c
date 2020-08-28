#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "quadro_solve.c"

/**
    \brief The main function that imports quadro_solve and displays the value of each of the roots

*/

int main()
{
    double a = 0, b = 0, c = 0, x1 = 0, x2 = 0;
    
    printf("Введите три числа:\n");
    while (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        printf("Введите три числа:\n");
        fflush(stdin);
    }

    int res = quadro_solve(a, b, c, &x1, &x2);

    switch (res)
    {
    case -1:
        printf("Бесконечное множество решений\n");
        break;

    case 0:
        printf("Действительных корней не существует\n");
        break;

    case 1:
        printf("x = %lf\n", x1);
        break;

    case 2:
        printf("x1 = %lf\nx2 = %lf\n", x1, x2);
        break;

    default:
        printf("Ошибка. Не удалось найти значения корней\n");
        return 1;
    }

    return 0;
}

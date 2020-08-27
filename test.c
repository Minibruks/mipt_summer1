#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "quadro_solve.c"



int main()
{
    double a = 0, b = 0, c = 0, x1, x2, res;
    
    scanf("%lf %lf %lf", &a, &b, &c);

    res = quadro_solve(a, b, c, &x1, &x2);

    if (res == -1) {
    	printf("Бесконечное множество решений\n");
    }
    if (res == 0) {
    	printf("Действительных корней не существует\n");
    }
    if (res == 1) {
    	printf("x = %lf\n", x1);
    }
    if (res == 2) {
    	printf("x1 = %lf\nx2 = %lf\n", x1, x2);
    }

    return 0;
}

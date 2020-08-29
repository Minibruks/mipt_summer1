#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "quadro_solve.c"
#define NO_SOLUTIONS 0
#define INF_SOLUTIONS -1
#define ARR_SIZE 6


int main()
{
    double a[ARR_SIZE] = {1, 2, 4, 1, 0, 3};
    double b[ARR_SIZE] = {-4, 0, 0, 2, 0, 0};
    double c[ARR_SIZE] = {4, -5, 4, 3, 0, -27};
    double x1[ARR_SIZE] = {2, -1.58, NO_SOLUTIONS, 1, 3, -3};
    double x2[ARR_SIZE] = {2, 1.58, NO_SOLUTIONS, 2, 4, 3};
    int num_of_sol[ARR_SIZE] = {1, 2, 0, 1, INF_SOLUTIONS, 2};

    for (int i = 0; i < ARR_SIZE; i++)
    {
        int res = quadro_solve(a[i], b[i], c[i], &x1[i], &x2[i]);
        if (res == num_of_sol[i])
        {
            printf("Test %d: OK\n", i + 1);
        } else
        {
            if (res == -1)
            {
                printf("ERROR\nInput params: %lf, %lf, %lf\nExpected: %d solution(s)\nGot: infinite number of solutions\n", a[i], b[i], c[i], num_of_sol[i]);
            } else
            {
                printf("ERROR\nInput params: %lf, %lf, %lf\nExpected: %d solution(s)\nGot: %d solution(s)\n", a[i], b[i], c[i], num_of_sol[i], res);
            }
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "quadro_solve.c"


int unit_tests()
{
    double temp_x1 = 0, temp_x2 = 0;
    assert(quadro_solve(1, 2, 3, &temp_x1, &temp_x2) == 0);
    assert(quadro_solve(1, -4, 4, &temp_x1, &temp_x2) == 1);
    assert(quadro_solve(2, 0, -3, &temp_x1, &temp_x2) == 2);
    assert(quadro_solve(0, 0, 0, &temp_x1, &temp_x2) == -1);
    assert(quadro_solve(4, -2, 0, &temp_x1, &temp_x2) == 2);
    return 0;
}

int main()
{
    if (unit_tests() == 0)
    {
        printf("OK\n");
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#define small_int 1e-6

int quadro_solve(double a, double b, double c, double *x1, double *x2)
{
	double D = 0;

	assert(x1 != NULL);
	assert(x2 != NULL);

	if (a == 0 && b == 0 && c == 0)
	{
		return -1;
	}
	else
	{
		if (a == 0)
		{
			if (b == 0)
			{
				return 0;
			}
			else
			{
				*x1 = -c / b;
				return 1;
			}
		}
		else
		{
			D = b * b - 4 * a * c;
			if (D < 0)
			{
				return 0;
			}

			*x1 = (-b - sqrt(D)) / (2 * a);
			*x2 = (-b + sqrt(D)) / (2 * a);

			if (fabs(D) < small_int)
			{
				return 1;
			}
			if (D > 0)
			{
				return 2;
			}
			else
			{
				return 0;
			}
		}
	}
}

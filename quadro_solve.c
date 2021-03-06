#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#define SMALL_INT 1e-6

/// Params description
enum params
{
    a, ///< x^2 coefficient
    b, ///< x coefficient
    c, ///< free term
};

/** \brief A function that returns the number of roots of a square equation 
    \version 1.0.0
    \param[in] a, b, c
    \param[out] number of roots
    \return -1 - infinite number of solutions, 0 - no roots, 1 - one root, 2 - two roots
 */

int quadro_solve(double a, double b, double c, double *x1, double *x2)
{
    double D = 0;
    
    assert(x1 != NULL);
    assert(x2 != NULL);
    
    if (a == 0 && b == 0 && c == 0)
    {
        return -1;
    } else
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
        } else
        {
            D = b * b - 4 * a * c;
            if (D < 0)
            {
                return 0;
            }

            *x1 = (-b - sqrt(D)) / (2 * a);
            *x2 = (-b + sqrt(D)) / (2 * a);

            if (fabs(D) < SMALL_INT)
            {
                return 1;
            }
            if (D > 0)
            {
                return 2;
            }
        }
    }
}

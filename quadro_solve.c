#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int quadro_solve(double a, double b, double c, double* x1, double* x2) {
	double D = 0;

	if (a == 0 & b == 0 & c == 0) {
    	return -1;
    }
    else {
    	if (a == 0) {
    		if (b == 0) {
    			return 0;
    		}
    		else {
    			*x1 = -c / b;
    			return 1;
    		}
    	}
    	else {
    		D = b * b - 4 * a * c;
	    	*x1 = (-b - sqrt(D)) / 2;
	    	*x2 = (-b + sqrt(D)) / 2;

	    	if (fabs(D) < 0.00001) {
	    		return 1;
	    	}
	    	if (D > 0) {
	    		return 2;
	    	}
	    	else {
	    		return 0;
	    	}
    	}
    }
}

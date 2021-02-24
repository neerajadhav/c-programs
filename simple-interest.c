/* calculation of simple interest */
/* Author : Neeraj Adhav */
/* Date : 20/2/2021 */

/* simply calculate the simple interest
 for a set of values representing 
 principle, number of years and rate of interest */

#include <stdio.h>

int main(){
	int p,n;
	float r, si;

	p = 1000;
	n = 3;
	r = 805;

	/* Formula for simple interest */
	si = p * n * r / 100;

	printf("%f\n", si);

	/* %f for printing real values */
	/* %d for printing integer values */
	/* %c for printing constant values */

	return 0;
}

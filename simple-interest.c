/* calculation of simple interest */
/* Author : Neeraj Adhav */
/* Date : 20/2/2021 */

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
	return 0;
}

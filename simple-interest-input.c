/* calculation of simple interest */
/* Author : Neeraj Adhav */
/* Date : 20/2/2021 */

#include <stdio.h>

int main(){
	int p,n;
	float r, si;

	printf("Enter values for p, n, r");
	scanf("%d %d %f", &p, &n, &r);

	/* Formula for simple interest */
	si = p * n * r / 100;

	printf("%f\n", si);

	return 0;
}

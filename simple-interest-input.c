/* calculation of simple interest */
/* Author : Neeraj Adhav */
/* Date : 20/2/2021 */

/* the programitself should ask the user to supply the values
 of  p, n and r through the keyboard during execution.
 This can be achieved using a funstion called scanf().
 This function is counterpart of the printf() function. */

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

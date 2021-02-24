/* calculation of gross salary */
/* Author : Neeraj Adhav */
/* Date : 24/2/2021 */

/* In a company an employee is paid a under:
 If his basic salary is less than 1500, then
 HRA = 10% of basic salary and DA = 90% of basic salary
 If his basic salary is equal to or above 1500, then
 HRA = 500 and DA = 98% of the basic salary. */

#include <stdio.h>

int main(){
    float salary, hra, da;

    printf("Type your proper Basic Salary = ");
    scanf("%f", &salary);

    if(salary < 1500){
        hra = salary * 0.1;
        da = salary * 0.9;
        printf("HRA = %f and DA = %f \n", hra, da);
    }else{
        hra = 500;
        da = salary * 0.98;
        printf("HRA = %f and DA = %f \n", hra, da);
    }

    float gs = salary + hra + da;

    printf("Gross Salary = %f\n", gs);
    return 0;
}
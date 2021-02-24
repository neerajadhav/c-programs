/* calculation of bonus */
/* Author : Neeraj Adhav */
/* Date : 24/2/2021 */

/* The current year and the year in which the employee joined the organisation
 are entered through the keyboard. If the number of years foir which the employee has serverd
 the organization is greater than 3, then a bonus of Rs. 2500/- is given to the employee.
 If the years of service are not greater than 3, then the program should do nothing */

#include <stdio.h>

int main(){
    int bonus, cy, yoj, yos;

    printf("Enter current year and year of joining");
    scanf("%d %d",&cy, &yoj);

    yos = cy - yoj;
    if( yos > 3 ){
        bonus = 2500;
        printf("Bonux = Rs. %d\n", bonus);
    }
    return 0;
}
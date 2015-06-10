/* Jonathan Mueller
 * February 4, 2015
 * karting.c - calculates cost of go-karting for a user specified amount of time
 */

//included libraries
#include <stdio.h>
//main function
int main() {
    //declare variables
    int minutes = 0;
    float cost_per_hour, hours;

    //request input from user
    printf("How much does this go-kart location charge per hour?\n");
    scanf("%f", &cost_per_hour);
    printf("How many minutes can you spend there?\n");
    scanf("%d", &minutes);

    if(minutes % 60 == 0) {
     hours = (minutes / 60) * cost_per_hour;
        printf("Your total will be $%.2f.\n", hours);
    }
    else {
    hours = ( ((minutes/60) +1) * cost_per_hour);
    printf("Your total will be $%.2f.\n", hours);
    }
    return 0;
}


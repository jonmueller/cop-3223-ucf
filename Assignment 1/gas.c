/* Jonathan Mueller
 * January 27, 2015
 * COP3223-0003
 * gas.c - calculate the cost spent on gas per week to drive to school.
 */

//included libraries
#include <stdio.h>

#define MILES_PER_GALLON 23
#define MILES_TO_SCHOOL 25

//main function
int main() {
    float gas_price, campus_visits, weekly_gas_money;
    printf("How much does gas cost this week?\n");
    scanf("%f", &gas_price);
    printf("How many times does John have to drive to campus this week?\n");
    scanf("%f", &campus_visits);

    weekly_gas_money = gas_price * ((MILES_TO_SCHOOL * campus_visits) / MILES_PER_GALLON);

    printf("John must spend $%.2f on gas this week.\n", weekly_gas_money);
    return 0;
}

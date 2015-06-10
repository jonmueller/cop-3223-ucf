/* Jonathan Mueller
 * February 4, 2015
 * discounts.c - To calculate if discounts are exceeding the initial cost of a widget.
 */

//included libraries
#include <stdio.h>

#define WIDGET_COST 0.40
//main function
int main() {
    //declare variables
    float medium, large;
    float widget_price;

    //request input from user
    printf("How much are you selling each widget for?\n");
    scanf("%f", &widget_price);
    printf("What percent are you discounting medium orders?\n");
    scanf("%f", &medium);
    printf("What percent are you discounting large orders?\n");
    scanf("%f", &large);


    if (widget_price <= WIDGET_COST) {
        printf("Nick, your base price is too low!\n");
    }

    else if (widget_price - ((medium/100) * widget_price) <= WIDGET_COST) {
        printf("Nick, you are discounting medium purchases too much!\n");
    }

    else if (widget_price - ((large/100) * widget_price) <= WIDGET_COST) {
        printf("Nick, you are discounting large purchases too much!\n");
    }
    else {
        printf("All prices look good to me!\n");
    }
    printf("Good luck!\n");
    return 0;
}

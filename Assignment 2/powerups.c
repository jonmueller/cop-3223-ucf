/* Jonathan Mueller
 * February 4, 2015
 * powerups.c - To calculate the maximum number of powerups purchased and the remaining number of credits you will have after.
 */

//included libraries
#include <stdio.h>
//main function
int main() {
    //declare variables
    int pow1, pow2, total_credits, max_pow, remain_credits;

    //request input from user
    printf("How much does the first powerup cost (in credits)?\n");
    scanf("%d", &pow1);
    printf("How much does the second powerup cost (in credits)?\n");
    scanf("%d", &pow2);
    printf("How many credits do you currently have?\n");
    scanf("%d", &total_credits);

    if (pow1 < pow2) {
        max_pow = total_credits / pow1;
        remain_credits = total_credits % pow1;
        printf("You can purchase a maximum of %d powerups, with %d credits left over.\n", max_pow, remain_credits);
    }
    else {
        max_pow = total_credits / pow2;
        remain_credits = total_credits % pow2;
        printf("You can purchase a maximum of %d powerups, with %d credits left over.\n", max_pow, remain_credits);
    }

    return 0;
}


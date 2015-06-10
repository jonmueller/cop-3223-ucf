// Jonathan Mueller
// COP3223 Section 3
// savings.c - Calculate the interest on a savings account and output the monthly amount to a text file and the yearly amount to the standard output.


#include <stdio.h>

int main() {
        int  years, month;
        double initial, deposit, interest, balance;
        FILE *outputFile;

        printf("Enter your initial amount.\n");
        scanf("%lf", &initial);
        printf("Enter your monthly deposit.\n");
        scanf("%lf", &deposit);
        printf("Enter the annual interest rate (compounded monthly).\n");
        scanf("%lf", &interest);
        printf("Enter the number of years to calculate.\n");
        scanf("%d", &years);
        printf("\n");

        outputFile = fopen("savings.txt", "w");

        balance = initial;

        for (month = 1; month <= years * 12; month++) {
                balance += (interest/1200*balance) + deposit;

                fprintf(outputFile, "%d $%.2lf\n", month, balance);

                if (month % 12 == 0)
                        printf("%d $%.2lf\n", month / 12, balance);
        }

        printf("\n");

        return 0;
}

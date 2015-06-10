// Jonathan Mueller
// COP3223 Section 3
// plotter.c - plot an X on a graph when given x,y inputs from the user.


#include <stdio.h>
#define WIDTH 9
#define HEIGHT 9

void printLine();
void printRow(int rowNum, int X);

int main() {
        int i, X, Y;

        printf("Enter an X and Y coordinate:\n");
        scanf("%d%d", &X, &Y);

        printf("\n");
        printLine();

        for (i = HEIGHT; i > 0; i--) {
                if (i == Y)
                        printRow(i, X);
                else
                        printRow(i, -1);
        }

        // Print final line - the X-axis label
        printf("  ");
        for (i = 1; i <= WIDTH; i++)
                printf("   %d", i);

        printf("\n\n");

        return 0;
}

// Pre-condition: None
// Post-condition: Prints the lines of the plot.
void printLine() {
        int i;
        printf("   +");
        for (i = 0; i < WIDTH; i++)
                printf("---+");
        printf("\n");
}


// Pre-condition: rowNum and X are positive integers.
// Post-Condition: Prints the Row while taking into account if the X is there or not.
void printRow(int rowNum, int X) {
        int i;
        printf(" %d |", rowNum);
        for (i = 0; i < WIDTH; i++)
                if (i+1 == X)
                        printf(" X |");
                else
                        printf("   |");
        printf("\n");
        printLine();
}

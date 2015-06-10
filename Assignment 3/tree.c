// Jonathan Mueller
// February 13, 2015
// COP3223 Section 3
// tree.c - Draw an ASCII tree with a user defined number of levels and layers.

#include <stdio.h>

void printChars(char pChar, int num); // Function prototype

int main()
{
        // Declare variables
        int levels, layers;
        int currentWidth, baseWidth;
        int i, j;

        // Request user variable input
        printf("How many levels should this tree have?\n");
        scanf("%d", &levels);
        printf("How many layers should each level have?\n");
        scanf("%d", &layers);

        printf("\n\n");

        // Calculate the width of the bottom row
        // Value actually represents half the width, rounded down
        baseWidth = (layers * levels - 1) - (2 * (levels - 1));


        currentWidth = 1;

        // Print the leaves
        for (i = 1; i <= levels; i++)
        {
                currentWidth -= 2;

                for (j = 1; j <= layers; j++)
                {
                        currentWidth += 1;


                        printChars(' ', baseWidth - currentWidth); // Uses the printChars function to print the 'space' character
                        printChars('*', currentWidth * 2 + 1);     // Uses the printChars function to print the '*' character
                        printf("\n");
                }
        }

        // Print the trunk
        for (i = 0; i < 4; i++)
        {
                printChars(' ', baseWidth - 1);
                printChars('#', 3);
                printf("\n");
        }


        return 0;
}

void printChars(char pChar, int num)
{
        int i;
        for (i = 0; i < num; i++)
                printf("%c", pChar);
}

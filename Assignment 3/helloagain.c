// Jonathan Mueller
// February 10, 2015
// COP3223 Section 3
// helloagain.c - Print various hello statements on screen when given a variable
// alternating between a statement for even numbers and a statement for odd.

#include <stdio.h>

int main()
{
        int i;

        // Get input from the user.
        printf("How many times would you like me to repeat it?\n");
        scanf("%d", &i);


        // Begin do while loop
        do
        {

                if (i % 2 == 1)
                        printf("Hello!\n"); // If i is odd print the statement Hello!


                else
                        printf("Hello again!\n"); // If number is even print Hello again!


        i--; // Subtract 1 from i

        }
        while (i > 0); // Repeat the do statement until it reaches 0

    return 0;
}


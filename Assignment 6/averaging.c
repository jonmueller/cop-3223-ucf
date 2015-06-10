//  Jonathan Mueller
//  COP3223 Section 3
//  averaging.c - Average some user input numbers together using pointers and a function.

#include <stdio.h>

int read_number(int* value);

int main() {
        int theNum, total = 0, sum = 0;

        while (read_number(&theNum)) {
                sum += theNum;
                total++;
        }

        printf("%.2f", (double)sum / (double)total);

        printf("\n");
        return 0;
}

// Precondition: value will be a pointer to where the input value is
//    to be stored.
// Postcondition: returns true if a number was read, or false if
//    it was the end of the list. The int pointed to by value will be
//    set to the number input by this function, made negative or
//    positive depending on the character before it.
int read_number(int* value) {
        char theChar, garbage; //garbage handles the new line character

        scanf("%c", &theChar);

        switch (theChar) {
        case 'e':
        default:
                return 0;
        case 'p':
                scanf("%d%c", value, &garbage);
                return 1;
        case 'n':
                scanf("%d%c", value, &garbage);
                *value *= -1;
                return 1;
        }
}

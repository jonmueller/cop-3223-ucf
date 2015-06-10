//  Jonathan Mueller
//  COP3223 Section 3
//  greeting.c - Greets a user with an input string and user selected name prefix.

#include<stdio.h>
#include<string.h>
#define MAX_NAME_LENGTH 100

int main(){
    char name[MAX_NAME_LENGTH];

    printf("What is the user's name?\n");
        scanf("%s", name);
    int prefix;
    printf("What is the user's name prefix?\n(1) Mr.\n(2) Ms.\n(3) Mrs.\n(4) Dr.\n");
        scanf("%d", &prefix);
    switch(prefix){
        case 0: {printf("Hello %s, welcome to the program!\n", name);
            break;
            }
        case 1: {printf("Hello Mr. %s, welcome to the program!\n", name);
            break;
            }
        case 2: {printf("Hello Ms. %s, welcome to the program!\n", name);
            break;
            }
        case 3: {printf("Hello Mrs. %s, welcome to the program!\n", name);
            break;
            }
        case 4: {printf("Hello Dr. %s, welcome to the program!\n", name);
            break;
            }
    }
    return 0;
}



// Jonathan Mueller
// February 13, 2015
// COP3223 Section 3
// factorgame.c - A game between two players involving factors of a player determined number.


//  Included Libraries
#include <stdio.h>
//main function
int main()
{

    int playerNumber=1, gameNumber, factor;

    printf("What number should the game be played with?\n");
    scanf("%d", & gameNumber);
    do
    {

            do
            {       // Gives the current number and prompts the current player for a factor.
                    printf("The current number is %d. Player %d, enter a factor.\n", gameNumber, playerNumber);
                    scanf("%d", &factor);

                    while(gameNumber % factor != 0)
                    {           // This loop is triggered when a user defined factor does not evenly divide the gameNumber.
                            printf("Invalid factor. %d does not evenly divide %d. Enter a valid factor.\n", factor, gameNumber);
                            printf("The current number is %d. Player %d, enter a factor.\n", gameNumber, playerNumber);
                            scanf("%d", &factor);
                    }

                    while(factor <= 1)
                    {           // This loop is triggered when the user tries to input a factor less than 2.
                            printf("Invalid factor. Numbers less than 2 are not allowed.\n");
                            printf("The current number is %d. Player %d, enter a factor.\n",gameNumber, playerNumber);
                            scanf("%d", &factor);
                    }

            }

            while(gameNumber % factor!= 0 && factor <= 1);
            {
                    gameNumber = gameNumber / factor;
            }

            if(gameNumber == 1)
            {           //This triggers the end of the game.
                        printf("Game over. Player %d won!\n",playerNumber);
            }
            if(gameNumber > 1 && playerNumber == 1)
            {
                        playerNumber++;
            }
            else
            {
                        playerNumber--;
            }
    }
    while(gameNumber != 1);
    return 0;
}

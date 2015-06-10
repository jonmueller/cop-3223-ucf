// Jonathan Mueller
// COP3223 Section 3
// counting.c - Simplify the readout of duplicate numbers in a given text-file.


#include <stdio.h>

int main() {
        FILE *inputFile;
        int num, i, curNum, lastNum, occurance;

        if ((inputFile = fopen("counting.txt", "r")) == NULL)
                printf("The input file was not found.\n");
        else {
                fscanf(inputFile, "%d", &num);

                //Read the first number to start
                fscanf(inputFile, "%d", &curNum);
                occurance = 1;
                lastNum = curNum;

                //Loop through the rest of the numbers
                for (i = 1; i < num; i++) {
                        fscanf(inputFile, "%d", &curNum);

                        if (lastNum == curNum) {
                                occurance++;
                        }
                        else {
                                printf("%dx%d ", lastNum, occurance);
                                occurance = 1;
                        }

                        lastNum = curNum;
                }

                //Print the last occurance
                printf("%dx%d ", lastNum, occurance);
        }

        return 0;
}

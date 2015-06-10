//  Jonathan Mueller
//  COP3223 Section 3
//  matrixmultiply.c - Gets two user input matrices, multiplies them, then prints them.

#include <stdio.h>

int main(){

    int size;
    scanf("%d", &size);
    //  First Matrix
    int i, j;
    int first[size][size];
    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            scanf("%d", &first[i][j]);

    //  Second Matrix
    int second[size][size];
    int product[size][size];
    int k;
    int sum = 0;
    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            scanf("%d", &second[i][j]);

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            for (k = 0; k < size; k++) {
                sum = sum + first[i][k]*second[k][j];
            }

        product[i][j] = sum;
        sum = 0;
        }
    }

    //  Product Matrix
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++)
            printf("%d\t", product[i][j]);

      printf("\n");
    }

    return 0;
}

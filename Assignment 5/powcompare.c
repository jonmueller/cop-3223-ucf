#include <stdio.h>
#include <math.h>

// Pre-condition: base and pow will be non-negative integers.
// Post-condition: Returns base raised to the power of pow.
int power(int base, int power);

int main() {
	int baseA, powerA;
	int baseB, powerB;
	int powNumA, powNumB;

	printf("Enter baseA and powerA\n");
	scanf("%d %d", &baseA, &powerA);

    printf("Enter baseB and powerB\n");
    scanf("%d %d", &baseB, &powerB);

    powNumA = power(baseA, powerA);
    powNumB = power(baseB, powerB);

    if (powNumA != powNumB) {
            printf("Not equal.\n");
            printf("Enter baseB and powerB\n");
            scanf("%d %d", &baseB, &powerB);
    }

    printf("%d^%d = %d^%d = %d", baseA, powerA, baseB, powerB, powNumB);
    return 0;
}

int power(int base, int power) {
    int powNum;
	powNum = pow(base, power);
	return;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Pre-condition: value will be an integer greater than 1.
// Post-condition: Returns true (1) if value is prime, or false (0) otherwise.
int isPrime(int value);

// Pre-condition: current will be a positive integer greater than 1.
// Post-condition: Returns the next prime number greater than or equal to current.
int nextPrime(int current);

int main()
{
	int i = 0;
	int count = 0;
	int numberofTwinPrimes;
	printf("Enter how many twin primes you want to find: ");
	scanf("%d", &numberofTwinPrimes);

	// Start checking at 3 and increment by 2.
	// There is no point checking even numbers.
	// When we find the required number of twin primes, stop.
	for (i = 3; i <= 1000000 && count < numberofTwinPrimes; i += 2)
	{
		if (isPrime(i) && isPrime(i + 2))
		{
			++count;
			printf("%d\t %d\n", i, i + 2);
		}
	}
	system("PAUSE");
	return 0;
}

int isPrime(int value)
{
	int stop = 0;
	int i = 0;

	// Special case for 3.
	if (value == 3)
	{
		return 1;
	}

	// If n is not divisible by numbers up to sqrt(n),
	// then, n is a prime number.
	stop = (int)(sqrt(value));

	// We can start at 3 and increment by 2
	// There is no point dividing by even numbers.
	for (i = 3; i <= stop; i += 2)
	{
		if (value % i == 0)
		{
			// It is not a prime number.
			return 0;
		}
	}

	// Checked divisibility by all numbers up to sqrt(n)
	// This is a prime number.
	return 1;
}
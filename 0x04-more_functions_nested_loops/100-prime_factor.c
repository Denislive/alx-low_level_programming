#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @num: The number to find the largest prime factor of
 *
 * Return: The largest prime factor
 */
long largest_prime_factor(long num)
{
	long i, largest;

	largest = -1;

	while (num % 2 == 0)
	{
		largest = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			largest = i;
			num /= i;
		}
	}

	if (num > 2)
		largest = num;

	return largest;
}

int main(void)
{
	long number = 612852475143;
	long largest_prime;

	largest_prime = largest_prime_factor(number);

	printf("%ld\n", largest_prime);

	return 0;
}

#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Starting number
 *
 * Description: This function prints all natural numbers from n to 98,
 * separated by a comma and a space. The numbers are printed in ascending
 * or descending order depending on the value of n.
 **/
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);

		if (n < 98)
			n++;
		else
			n--;
	}

	printf("%d\n", n);
}

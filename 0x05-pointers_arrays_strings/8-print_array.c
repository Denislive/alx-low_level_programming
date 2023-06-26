#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements to be printed.
 *
 * Description:
 *   - This function takes an array of integers and the number of elements to be printed
 *     as parameters and prints the elements followed by a new line.
 *   - The numbers are separated by a comma and a space.
 *   - The numbers are displayed in the same order as they are stored in the array.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}

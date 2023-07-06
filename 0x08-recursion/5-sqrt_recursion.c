#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of the number.
 * If n does not have a natural square root, returns -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Helper function to calculate the square root recursively.
 * @n: The number to calculate the square root of.
 * @i: The current value to check as a possible square root.
 *
 * Return: The natural square root of the number.
 * If the square root is not found, returns -1.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (_sqrt_helper(n, i + 1));
}

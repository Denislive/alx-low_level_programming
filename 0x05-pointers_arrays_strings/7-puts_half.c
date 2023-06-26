#include "main.h"

/**
 * _strlen - Computes the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string.
 *
 * Description:
 *   - This function takes a string pointer as a parameter and prints the second half
 *     of the string, followed by a new line.
 *   - If the number of characters in the string is odd, it prints the last (length - 1) / 2
 *     characters of the string.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int i, start;

	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length - 1) / 2 + 1;

	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}


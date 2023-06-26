#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first character.
 * @str: Pointer to the string to be printed.
 *
 * Description:
 * - This function takes a string pointer as a parameter and prints every other character
 *   of the string, starting with the first character, followed by a new line.
 * - It assumes that the string is null-terminated.
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

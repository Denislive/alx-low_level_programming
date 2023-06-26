#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Description: This function takes a string pointer as a parameter and
 * prints the string character by character in reverse order until the null
 * terminator is encountered, followed by a new line character.
 */
void print_rev(char *s)
{
	int length = 0;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* Print the string in reverse order */
	while (length > 0)
	{
		_putchar(s[length - 1]);
		length--;
	}

	_putchar('\n');
}

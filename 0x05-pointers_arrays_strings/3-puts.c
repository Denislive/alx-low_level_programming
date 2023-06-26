#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Description: This function takes a string pointer as a parameter and
 * prints the string character by character until the null terminator is
 * encountered, followed by a new line character.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

	write(1, "\n", 1);
}

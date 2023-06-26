#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success, returns the character written.
 *         On error, returns -1.
 *
 * Description: This function writes a character to the standard output (stdout).
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

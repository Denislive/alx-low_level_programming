int _putchar(char c);  /* External declaration for _putchar */

/**
 * _puts - Prints a string to the standard output
 * @s: The string to be printed
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}

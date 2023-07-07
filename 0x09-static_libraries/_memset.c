/**
 * _memset - Fills a block of memory with a specific value
 * @s: The pointer to the memory area
 * @b: The value to be set
 * @n: The number of bytes to be set
 *
 * Return: The pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *s_orig = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (s_orig);
}

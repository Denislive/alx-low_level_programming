/**
 * _strncpy - Copies a string up to a given number of characters
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to copy
 *
 * Return: The pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_orig = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (dest_orig);
}

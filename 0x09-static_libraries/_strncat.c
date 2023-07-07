/**
 * _strncat - Concatenates two strings up to a given number of characters
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to concatenate
 *
 * Return: The pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_orig = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (dest_orig);
}

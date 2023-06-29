/**
 * _strncpy - Copies a string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be copied.
 *
 * Description: The s from the source string
 * to the destinatiosrc is less than n, the remaining
 * bytes in dest aref src is greater than
 * or equal to n, thdest is not null-terminated.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy at moe source string */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Fill the r dest with null bytes */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

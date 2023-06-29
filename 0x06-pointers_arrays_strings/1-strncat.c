/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximufrom src to be appended.
 *
 * Description: The _strncat function,
 * overwriting thn adds
 * a terminating es from src. The src string
 * does not need contains n or more bytes.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* Find tof the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Appendn bytes from the source string */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len++] = src[i];

	/* Add the terminating null byte */
	dest[dest_len] = '\0';

	return (dest);
}

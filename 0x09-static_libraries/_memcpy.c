/**
 * _memcpy - Copies a block of memory
 * @dest: The destination memory area
 * @src: The source memory area
 * @n: The number of bytes to be copied
 *
 * Return: The pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_orig = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (dest_orig);
}

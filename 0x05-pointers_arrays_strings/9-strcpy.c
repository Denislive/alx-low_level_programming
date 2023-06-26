/**
 * _strcpy - Copies the string pointed to by src, including the terminating null byte (\0),
 *            to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Description:
 *   - This function copies the string pointed to by src to the buffer pointed to by dest.
 *   - The copy includes the terminating null byte ('\0').
 *
 * Return: The pointer to the destination buffer (dest).
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_ptr);
}

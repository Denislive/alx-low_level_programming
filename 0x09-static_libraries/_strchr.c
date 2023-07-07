#include <stddef.h>  /* Include the <stddef.h> header for NULL */


/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: The input string
 * @c: The character to be located
 *
 * Return: The pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}

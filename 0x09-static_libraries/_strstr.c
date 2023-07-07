#include <stddef.h>  /* Include the <stddef.h> header for NULL */


/**
 * _strstr - Locates a substring within a string
 * @haystack: The string to be searched
 * @needle: The substring to search for
 *
 * Return: The pointer to the beginning of the substring within the string,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (needle[j] == '\0')
			return (haystack + i);
	}

	return (NULL);
}

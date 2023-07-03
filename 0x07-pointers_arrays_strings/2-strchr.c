/**
 * _strchr - Locateof a character in a string
 * @s: Pointer to the string to be searched
 * @c: Character to be located
 *
 * Return: Pointer the character c in the string s,
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

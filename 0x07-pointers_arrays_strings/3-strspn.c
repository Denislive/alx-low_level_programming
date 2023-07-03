/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be evaluated
 * @accept: Pointer to the string containing the characters to match
 *
 * Return: The number of bytes in the initial segment of s consisting only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j, match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}

		if (match == 0)
			return (count);

		count++;
	}

	return (count);
}

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *start = str;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*ptr)
	{
		int index = 0;
		int found = 0;

		while (alpha[index])
		{
			if (*ptr == alpha[index])
			{
				*ptr = rot13[index];
				found = 1;
				break;
			}
			index++;
		}

		ptr++;
		if (!found)
			continue;
	}

	return (start);
}

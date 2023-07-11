#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: On success, a pointer to the newly allocated string
 *         containing the concatenated arguments.
 *         On failure or if ac is 0 or av is NULL, NULL is returned.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, k, len, total_len;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
			len++;
		total_len += len;
	}

	str = malloc(sizeof(char) * (total_len + ac + 1));
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			str[k] = av[i][len];
			len++;
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Creates an ait with a specific char.
 * @size: The size of the array.
 * @c: The char to initialize the array with.
 *
 * Return: On success, a pointer to the array.
 *         On failure, NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 *
 * Description: This function takes a string pointer as a parameter and
 * reverses the order of characters in the string in-place.
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = 0;
	char temp;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	end = length - 1;

	/* Reverse the string */
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}

#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Description:
 *   - This function converts a string to an integer.
 *   - The number in the string can be preceded by an infinite number of characters.
 *   - It takes into account all the '-' and '+' signs before the number.
 *   - If there are no numbers in the string, the function returns 0.
 *   - It does not use the 'long' type or hard-coded special values.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* Check for sign */
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[0] == '+')
	{
		i++;
	}

	/* Convert string to integer */
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			/* Non-digit character, break the loop */
			break;
		}

		/* Handle integer overflow */
		if ((result > INT_MAX / 10) || (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		/* Accumulate the result */
		result = (result * 10) + (s[i] - '0');
		i++;
	}

	return (result * sign);
}

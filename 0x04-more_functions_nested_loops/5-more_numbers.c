#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, repeated 10 times,
 *                followed by a new line.
 */
void more_numbers(void)
{
	int number, count;

	for (count = 0; count < 10; count++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
				_putchar((number / 10) + '0');

			_putchar((number % 10) + '0');
		}

		_putchar('\n');
	}
}

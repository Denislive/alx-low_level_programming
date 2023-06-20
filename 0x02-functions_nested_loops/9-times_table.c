#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row, column, result;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');

		for (column = 1; column <= 9; column++)
		{
			_putchar(' ');

			result = row * column;

			if (result <= 9)
				_putchar(' ');

			_putchar(result / 10 + '0');
			_putchar(result % 10 + '0');

			if (column != 9)
				_putchar(',');
		}

		_putchar('\n');
	}
}

#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of two two-digit
 * numbers, separated by a space and comma. The numbers range from 0 to 99,
 * and are printed with two digits (leading zeros if necessary). The
 * combinations are printed in ascending order, and duplicates like 00 01 and
 * 01 00 are considered as the same combination of the numbers 0 and 1.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = num1; num2 < 100; num2++)
		{
			if (num1 != num2)
			{
				putchar('0' + num1 / 10);
				putchar('0' + num1 % 10);
				putchar(' ');
				putchar('0' + num2 / 10);
				putchar('0' + num2 % 10);

				if (num1 != 98 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations of
 * three digits, separated by ", ", in ascending order. The three digits must
 * be different, and only the smallest combination is printed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 8; num1++)
	{
		for (num2 = num1 + 1; num2 < 9; num2++)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)
			{
				putchar('0' + num1);
				putchar('0' + num2);
				putchar('0' + num3);

				if (num1 != 7 || num2 != 8 || num3 != 9)
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

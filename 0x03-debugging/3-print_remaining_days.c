#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - Takes a date and prints how many days are left in the year,
 *                        taking leap years into account.
 * @month: The month (1-12)
 * @day: The day of the month (1-31)
 * @year: The year
 *
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		if (month > 2 || (month == 2 && day == 29))
		{
			printf("Day of the year: %d\n", 31 + 29 + day);
			printf("Remaining days: %d\n", 366 - (31 + 29 + day));
		}
		else
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		}
	}
	else
	{
		if (month == 2 && day == 29)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		}
		else
		{
			printf("Day of the year: %d\n", 31 * (month - 1) + day);
			printf("Remaining days: %d\n", 365 - (31 * (month - 1) + day));
		}
	}
}

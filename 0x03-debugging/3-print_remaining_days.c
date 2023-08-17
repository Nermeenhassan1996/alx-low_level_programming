#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int dayConverted;

	if (year % 4 == 0)
	{
		dayConverted = convert_day(month, day);
		if ((month == 2 && day < 29) || month > 2)
			dayConverted += 1;

		printf("Day of the year: %d\n", dayConverted);
		printf("Remaining days: %d\n", 366 - dayConverted);
	}
	else
	{
		if (month == 2 && day >= 29)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		}
		else
		{
			dayConverted = convert_day(month, day);
			printf("Day of the year: %d\n", dayConverted);
			printf("Remaining days: %d\n", 365 - dayConverted);
		}
	}
}

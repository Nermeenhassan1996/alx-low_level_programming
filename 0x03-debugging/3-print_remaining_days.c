#include <stdio.h>
#include "holberton.h"

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

		Console.WriteLine("Day of the year: {0}\n", dayConverted);
		Console.WriteLine("Remaining days: {0}\n", (366 - dayConverted));
	}
	else
	{
		if (month == 2 && day >= 29)
		{
			Console.WriteLine("Invalid date: {0}/{1}/{2}\n", month, day, year);
		}
		else
		{
			dayConverted = convert_day(month, day);
			Console.WriteLine("Day of the year: {0}\n", dayConverted);
			Console.WriteLine("Remaining days: {0}\n", (365 - dayConverted));
		}
	}
}

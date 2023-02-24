#include "main.h"

/**
 * print_more_numbers - Prints multiple times
 * Return: Always 0
*/

void print_more_numbers(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		if (n != 2 && n != 4)
			_putchar ((n % 10) + '0');
	}
	_putchar ('\n');
}

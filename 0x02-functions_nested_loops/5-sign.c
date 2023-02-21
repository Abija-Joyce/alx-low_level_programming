#include "main.h"

/**
 * print_sign - Checks for size in relation to 0
 * prints out + for positive, 0 for 0 and - for negative
 * @n: The character
 *
 * Return: Always 0.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}

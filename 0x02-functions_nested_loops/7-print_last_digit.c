#include "main.h"

/**
 * print_last_digit - Prints the last digit of the input number
 * @r: The number
 *
 * Return: Always 0.
*/

int print_last_digit(int r)
{
	int ld = r % 10;

	if (ld < 0)
		ld *= -1;

	_putchar ('0' + ld);

	return (0);
}

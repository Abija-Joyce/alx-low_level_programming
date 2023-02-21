#include <stdio.h>
#include "math.h"

/**
 * print_to_98 - Print in
 * @n: The int
 *
 * Return: Set of oredered number
*/

void print_to_98(int n)
{
	if (n  >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

#include "main.h"

/**
 * _sqrt_recursion - helps sqrt function find sqrt
 * @n: needs to be sqr
 * Return: natural sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (_sqrt_recursion(n, ++x));
	return (-1);
}

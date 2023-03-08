#include "main.h"

/**
 * is_prime_number - helps prime function
 * @n: number to be checked
 * Return: 0 if not prime, 1 if prime
 */

int is_prime_number(int n)
{
	if (x > 9)
		return (1);
	else if (n % x != 0)
		return (is_prime_number(n, ++x));
	return (0);
}

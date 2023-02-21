#include "main.h"
/**
 * _islower - Checks characters for lowercase or not
 * @c : The character
 * Returns 0 if lower and 0 if not
 *
 * Return: Always e
 *
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

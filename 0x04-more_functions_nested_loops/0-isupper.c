#include "main.h"

/**
 * _isupper - Prints in Capital
 * @c: The char
 *
 * Return: Always 0;
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

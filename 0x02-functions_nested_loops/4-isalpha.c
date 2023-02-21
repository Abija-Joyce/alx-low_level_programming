#include "main.h"
/**
 * _isalpha - Checks for letters
 * and prints 1 if its character otherwise 0
 * @c: The character
 *
 * Return: Always 0.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

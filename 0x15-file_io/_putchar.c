#include "main.h"
/**
 * _putchar - Function
 * @c: Char
 * Return: 1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

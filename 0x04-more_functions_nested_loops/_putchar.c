#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints ot
 * @c: The char
 *
 * Return: 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

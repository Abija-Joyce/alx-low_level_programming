#include "main.h"
#inlude <string.h>

/**
 * int _strlen - String length
 * @s: Char
 * Return: Length of string
*/

int strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	
	return (i);
}

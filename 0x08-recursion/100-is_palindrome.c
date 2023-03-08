#include "main.h"

/**
 * get_length - gets length of string
 * @str: pointer to a string
 * @len: length of a string
 * Return: return length of string
 */
int get_length(char *str, int len)
{
	if (*(str + len) != '\0')
	{
		return (get_length(str, ++len));
	}
	return (--len);
}

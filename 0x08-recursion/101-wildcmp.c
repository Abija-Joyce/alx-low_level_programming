#include "main.h"

/**
 * wildcmp - escapes wildcard and increments string 1 if fails to match
 * @s1: string 1
 * @s2: string 2
 * Return: go through string 1 until it finds a match or '\0' value is found
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (wildcmp(s1, s2));
	return (wildcmp(s1, s2) || wildcmp(++s1, s2));
}

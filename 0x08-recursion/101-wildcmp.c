#include "main.h"

int cmp(char *c1, char *c2);

/**
 * escwild - escapes wildcard and increments string 1 if fails to match
 * @c1: string 1
 * @wild: string 2
 * Return: go through string 1 until it finds a match or '\0' value is found
 */
int escwild(char *c1, char *wild)
{
	if (*c1 == '\0')
		return (cmp(c1, wild));
	return (cmp(c1, wild) || escwild(++c1, wild));
}

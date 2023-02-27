#include "main.h"
/**
 * swap_int - Swaps
 * @a: Char
 * @b: Char
*/

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a =  *b;
	*b = n;
}

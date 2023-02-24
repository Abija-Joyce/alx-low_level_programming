#include "main.h"

/**
 * print_line - Prints line with character '_'
 * @n: Char to b printed
 *
*/

void print_line(int n)
{
	int line;

		if (n > 0)
		{
			for (line = 0; line <= n; line++)
				_putchar ('_');
		}
		_putchar ('\n');
}

#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}

	return;
}

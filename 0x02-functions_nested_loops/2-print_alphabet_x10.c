#include "main.h"
/**
 * main - Prints alphabet 10 times
 *
 * Return: Always 0.
*/

int main(void)
{
	int i;
	char ch;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}

	return (0);
}

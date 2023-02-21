#include<stdio.h>
/**
 * main-Program to print the alphabet
 * in lowercase followed by a newline
 *
 * Return: Always 0
*/

void print_alphabet(void){
	char ch = 'a';
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar (ch);
	putchar ('\n');
}
int main ()
{
	print_alphabet();
	return 0;
}

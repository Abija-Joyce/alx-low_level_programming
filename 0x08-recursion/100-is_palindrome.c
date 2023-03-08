#include "main.h"
/**
* is_palindrome - Prints out
* @s: pointer variable
* Return: int
*/
int is_palindrome(char *s)
{
	return (check_pali(s, s, get_length(s, 0)));
}

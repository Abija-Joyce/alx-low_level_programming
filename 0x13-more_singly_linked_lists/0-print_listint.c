#include "lists.h"
/**
 * print_listint - Singly Linked Lists
 * @h: Pointer
 * Return: Count
*/

size_t print_listint(const listint_t *h)
{
	size_t countn = 0;
	while(h != NULL)
	{
		printf("%d ", h->n);
		h = h->next;
		countn++;
	}
	return(countn);
}

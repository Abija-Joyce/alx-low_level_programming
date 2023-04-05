#include "lists.h"

/**
 * listint_len -Function name
 * @h: Pointer
 * Return: No. of elements,count.
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
	count++;
}
	return (count);
}

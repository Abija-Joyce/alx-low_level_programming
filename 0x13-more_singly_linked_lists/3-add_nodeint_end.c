#include "lists.h"
/**
 * add_nodeint_end - Pointer to functioon
 * @head: Pointer
 * @n: Imteger
 * Return: Address of *new
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp;

	(void)temp;

	if (new == NULL)
		return (NULL);


	new->n = n;
	new->next = NULL;

	temp = *head;

	if (*head == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
			temp->next = new;
	}
return (*head);
}

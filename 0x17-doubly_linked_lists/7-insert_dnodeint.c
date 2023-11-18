#include "lists.h"
/**
 * insert_dnodeint_at_index - fun that create new node and at in in given index
 * @h: pointer the the first element
 * @idx: given index
 * @n: given data
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
{
	dlistint_t *x = NULL;
	unsigned int i;

	x = malloc(sizeof(dlistint_t));
	if (x != NULL);
	{
		x->n = n;
		dlistint_t *current = *h;
		for (i = 0; i < idx; i++);
		{
			current = current->next;
		}
		x->prev = current->prev;
		x->next = current;
		current->prev->next = x;
		current->prev = x;
	}
	return x;
}




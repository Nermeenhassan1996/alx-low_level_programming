#include "lists.h"
/**
 * add_dnodeint_end - fun that add node to the end of a list
 * @head: pointer to the first element of a list
 * @n: data
 * Return: address to the newNode, NULL otherwise
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
{
	dlistint_t *x = NULL;

	x = malloc(sizeof(dlistint_t));
	if (x != NULL)
	{
		x->n = n;
		x->next = NULL;
		x->prev = NULL;
		if (*head == NULL)
		{
			*head = x;
			(*head)->prev = NULL;
		}
		else
		{
			for (dlistint_t *last = *head; last != NULL; last = last->next)
			{
				last->next = x;
				x->prev = last;
			}
		}
		return x;
	}
}

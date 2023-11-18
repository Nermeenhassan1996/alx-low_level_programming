#include "lists.h"
/**
 * add_dnodeint - fun that add node to the end of a list
 * @head: pointer to the first element of a list
 * @n: data
 * Return: address to the newNode, NULL otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
{
	dlistint_t *x = malloc(sizeof(dlistint_t));
	if (x != NULL)
	{
		x->n = n;
		x->prev = NULL;
		x->next = NULL;
		x->next = *head;
		*head->prev = x;
		*head = x;
	}
	return x;
}

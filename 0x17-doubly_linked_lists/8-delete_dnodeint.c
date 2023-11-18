#include "lists.h"
/**
 * delete_dnodeint_at_index - fun that delete node at given index
 * @head: pointer to the first node
 * @index: index of the node we want to delete
 * Return: 1 if success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
{
	unsigned int i;

	if (!h || !(*h))
	{
		return -1;
	}
	else
	{
		dlistint_t *current = *h;
		for (i = 0; i < index; i++);
		{
			current = current->next;
		}
		current->prev->next = current->next;
		current->next->prev = current->prev;
		delete current;
	}
	return 1;
}

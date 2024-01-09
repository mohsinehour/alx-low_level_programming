#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a list
 * @h: Pointer to the address of the head of the doubly linked list.
 * @idx: Index of the list where the new node should be added, starting from 0.
 * @n: Value to be set in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
	return (add_dnodeint(h, n));
	}
	current = *h;
	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}
	if (current == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;
	return (new_node);
}

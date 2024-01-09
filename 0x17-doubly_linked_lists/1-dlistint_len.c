#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 * Return: number of elements in a doubly linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}

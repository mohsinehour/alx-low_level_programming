#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position in a list.
 * @head: Pointer to the address of the head of the doubly linked list.
 * @index: Index of the node to be deleted, starting from 0.
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	temp = current->prev;
	temp->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = temp;
	}
	free(current);
	return (1);
}

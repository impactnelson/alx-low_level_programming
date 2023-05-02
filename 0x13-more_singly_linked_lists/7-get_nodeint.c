#include "lists.h"

/**
 * get_nodeint_at_index - Returns node at a certain index in linked list
 * @head: shows first node in the linked list
 * @index: the index of the node to be returned
 *
 * Return: Pointer of the node we are looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}


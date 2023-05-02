#include "lists.h"

/**
 * listint_len - returns numb of elements in linked lists
 * @h: traverse linked list of type listint_t
 *
 * Return: numb of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}


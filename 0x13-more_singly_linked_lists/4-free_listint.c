#include "lists.h"

/**
 * free_listint - make a linked list to be free
 * @head: frees listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}


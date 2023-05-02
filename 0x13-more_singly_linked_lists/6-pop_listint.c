#include "lists.h"

/**
 * pop_listint - to delete head node of linked list
 * @head: to point the first element in a linked list
 *
 * Return: data which is inside the elements deleted,
 * or 0 if the list is null
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}


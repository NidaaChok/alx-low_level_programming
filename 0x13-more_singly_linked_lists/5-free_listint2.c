#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 *                and sets head to NULL.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: Nothing to return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}

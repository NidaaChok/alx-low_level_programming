#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
<<<<<<< HEAD
 *                 and sets head to NULL.
=======
 *                and sets head to NULL.
>>>>>>> 8b49db47bfe7204ffb0719d2bad5b8f8f21481dd
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

<<<<<<< HEAD
	while (*head)
=======
	while (*head != NULL) 
>>>>>>> 8b49db47bfe7204ffb0719d2bad5b8f8f21481dd
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}

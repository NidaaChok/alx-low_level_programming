#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextNode;

	if (head == NULL || *head == NULL)
		return (NULL);

	nextNode = (*head)->next;
	(*head)->next = NULL;

	while (nextNode != NULL)
	{
		nextNode->next = *head;
		*head = nextNode;
		nextNode = (*head)->next;
	}

	return (*head);
}

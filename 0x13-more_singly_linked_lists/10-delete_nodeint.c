#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prevNode = *head;
	unsigned int i;

	if (prevNode == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(prevNode);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (prevNode->next == NULL)
			return (-1);

		prevNode = prevNode->next;
	}

	temp = prevNode->next;
	prevNode->next = temp->next;
	free(temp);
	return (1);
}

#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nextNode, *newNode;
	listint_t *prevNode = *head;

	for (i = 1; i < idx; i++)
	{
		if (prevNode == NULL)
			return (NULL);
		prevNode = prevNode->next;
	}

	nextNode = prevNode->next;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = nextNode;
	prevNode->next = newNode;

	return (newNode);
}

#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to head pointer of linked list
 * @n: data to add to new node
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *node;

	node = malloc(sizeof(listint_t)); /* create new node */
	if (node == NULL)
		return (NULL);

	node->n = n; /* set values */

	node->next = *head; /* first link new node to point to first node */
	*head = node; /* then switch list pointer to point to new node */

	return (node);
}


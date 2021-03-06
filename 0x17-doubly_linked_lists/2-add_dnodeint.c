#include "lists.h"

/**
 * add_dnodeint - adds node to list
 * @head: pointer to head of list
 * @n: number of node added
 * Return: pointer to new head of list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		current->prev = new;
		*head =  new;
	}
	return (*head);
}

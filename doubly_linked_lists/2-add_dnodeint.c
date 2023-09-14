#include "lists.h"
/**
* add_nodeint - adds a new node at the beginning of a linked list
* @head: pointer to the first node in the list
* @n: data to insert in that new node
* Return: pointer to the new node, or NULL if it fails
**/
dlistint_t *add_nodeint(dlistint_t **head, const int n)
{
dlistint_t *new = NULL;
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
new->prev = NULL;
if (*head == NULL)
{
new->next = NULL;
*head = new;
}
else
new->next = *head;
if (*head)
(*head)->prev = new;
*head = new;
}
return (new);
}

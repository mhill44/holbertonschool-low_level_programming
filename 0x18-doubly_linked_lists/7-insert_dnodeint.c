#include "lists.h"
/**
* insert_dnodeint_at_index - this is a function that inserts a new node at
* given position
* @h: this is the pointer
* @idx: is the index of the list where the new node should be added
* @n: this is the the data
* Return: returns the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current = *h;
dlistint_t *newNode;
unsigned int i = 1;
if (h == NULL)
return (NULL);
newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
if (idx == 0)
{
if (*h == NULL)
{
free(newNode);
return (add_dnodeint(h, n));
}
if (*h)
current->prev = newNode;
*h = newNode;
newNode->prev = NULL;
newNode->next = current;
current->prev = newNode;
return (newNode);
}
for (; i < idx; i++)
{
current = current->next;
if (current == NULL)
{
free(newNode);
return (NULL);
}
}
newNode->prev = current;
newNode->next = current->next;
if (current->next)
current->next->prev = newNode;
current->next = newNode;
return (newNode);
}

#include "lists.h"
/**
* dlistint_len - returns the number of nodes in a doubly linked list
* @h: is the pointer to the list
* Return: returns the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;
if (!h)
return (0);
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}

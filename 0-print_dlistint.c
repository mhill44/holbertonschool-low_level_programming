#include "lists.h"
/**
* print_dlistint -is  a function that prints all the elements of a dlistint_t
 @h: this is the the pointer to dlistint_t
* Return: returns the the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *current = h;
size_t elements = 0;
while (current)
{
printf("%d\n", current->n);
current = current->next;
elements++;
}
return (elements);
}

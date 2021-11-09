#include <stdio.h>
#include "lists.h"
/**
* list_len - function that returns the number of elements
* in a linked list
* @h: is the the list to work with
* Return: returns the number of elements
*/
size_t list_len(const list_t *h)
{
int i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}

#include <stdio.h>
#include "lists.h"
/**
* listint_len -this  is a function that returns the number of
* elements in a linked list
* @h: this is the list
* Return: returns the number of elements in h
*/
size_t listint_len(const listint_t *h)
{
size_t s = 0;
while (h)
{
h = h->next;
s++;
}
return (s);
}

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
* add_nodeint_end - is a function that adds a new node at the end of a list
* @head: this is the pointer to the list
* @n: this is the integer
* Return: returns tNULL if it failed, if success the address of new element 
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *start;
listint_t *end;
if (head == NULL)
return (NULL);
end = *head;
start = malloc(sizeof(listint_t));
if (start == NULL)
return (NULL);
start->n = n;
start->next = NULL;
if (*head == NULL)
{
*head = start;
return (start);
}
while (end->next)
end = end->next;
end->next = start;
return (start);
}

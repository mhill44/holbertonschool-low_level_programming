#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint - this is a function that adds a new node at the
* beginning of list
* @head: this is the pointer to the list
* @n: this is the integer
* Return: returns the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *start;
if (head == NULL)
return (NULL);
start = malloc(sizeof(listint_t));
if (start == NULL)
return (NULL);
start->n = n;
start->next = *head;
*head = start;
return (start);
}

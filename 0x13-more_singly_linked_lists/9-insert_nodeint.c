#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* insert_nodeint_at_index - this is a function that inserts a new node
* at a given position
* @head: this is the pointer to the list
* @idx: is the index of the list where the new node should be added,
* starts at 0
* @n: this is the integer
* Return: returns the address of the new node, or NULL if unsuccessful
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *start;
listint_t *position;
unsigned int i;
if (head == NULL)
return (NULL);
position = *head;
start = malloc(sizeof(listint_t));
if (start == NULL)
return (NULL);
start->n = n;
if (idx == 0)
{
start->next = *head;
*head = start;
return (start);
}
for (i = 0; position != NULL; i++)
{
if (idx - 1 == i)
{
start->next = position->next;
position->next = start;
return (start);
}
position = position->next;
}
free(start);
return (NULL);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* delete_dnodeint_at_index - a function that deletes the node at index
* of a dlistint_t linked list
* @head: double pointer to the head of the list
* @index: is the index of the node to delete
* Return: returns 1 for success, -1 for failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i = 0;
if (*head == NULL || dlistint_len(current) < index + 1)
return (-1);
if (!index)
{
(*head) = current->next;
if (current->next)
current->next->prev = NULL;
current->next = NULL;
free(current);
return (1);
}
while (i < index)
{
current = current->next;
i++;
}
current->prev->next = current->next;
if (current->next)
current->next->prev = current->prev;
free(current);
return (1);
}

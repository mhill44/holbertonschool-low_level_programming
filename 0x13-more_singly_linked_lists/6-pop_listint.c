#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* pop_listint - is a function that deletes the head node of a linked list
* @head: this is the pointer to the list
* Return: returns the head node's data (n)
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;
if (head == NULL || *head == NULL)
return (0);
n = (*head)->n;
temp = *head;
*head = (*head)->next;
free(temp);
return (n);
}

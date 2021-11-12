#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* free_listint2 - this is a function that frees a list
* @head: is the pointer to the list
*/
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
return;
while (*head)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
*head = NULL;
}

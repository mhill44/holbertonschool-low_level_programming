#include "lists.h"
/**
* sum_dlistint - is a function that returns the sum of all the data
* @head: is the pointer
* Return: returns 0  if the list is empty, return 0the data (n) or
*/
int sum_dlistint(dlistint_t *head)
{
int sum;
dlistint_t *current;
sum = 0;
current = head;
while (current)
{
sum += current->n;
current = current->next;
}
return (sum);
}

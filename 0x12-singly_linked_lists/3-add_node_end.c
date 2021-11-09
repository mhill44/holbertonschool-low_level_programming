#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include "string.h"
int _strlen(const char *s);
/**
* _strlen - function to return the length of a string
* @s: is the string to check
* Return: is the lenght of the string
*/
int _strlen(const char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
;
return (i);
}
/**
* add_node_end - function that adds a new node at the end of a list
* @head: is the pointer to the list
* @str: is the the string
* Return: returns the address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *end;
if (!head || !str)
return (NULL);
end = *head;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
if (!new->str)
{
free(new);
return (NULL);
}
new->len = _strlen(str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (end->next != NULL)
end = end->next;
end->next = new;
return (new);
}

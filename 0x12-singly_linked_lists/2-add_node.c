#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include "string.h"
int _strlen(const char *s);
/**
* _strlen - function to return the length of a string
* @s: is the string to check
* Return: returns the lenght of the string
*/
int _strlen(const char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
;
return (i);
}
/**
* add_node - function that adds a new node at the beginning of a list
* @head: is the pointer to the list
* @str: is the the string
* Return: returns the address of the new elements
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
if (!head || !str)
return (NULL);
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
new->next = *head;
*head = new;
return (new);
}

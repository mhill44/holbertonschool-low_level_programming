#include <stdio.h>
#include <stdlib.h>

#include "search_algos.h"

/**
 * linear_skip - this optimizes the time complex. of search
 * in a single linked list
 *
 * @list: this is the List
 * @value: this is the value
 *
 * Return: Return always EXIT_SUCCESS
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *_list = NULL;

if (!list)
return (NULL);

_list = list;
while (_list->express)
{
printf("Value checked at index [%lu] = [%d]\n",
_list->express->index, _list->express->n);
if (_list->express->n >= value)
{
printf("Value found between indexes [%lu] and [%lu]\n",
_list->index, _list->express->index);
break;
}
_list = _list->express;
}
if (!_list->express)
{
list = _list;
while (list->next)
list = list->next;
printf("Value found between indexes [%lu] and [%lu]\n",
_list->index, list->index);
}
list = _list;
while (list != _list->express)
{
printf("Value checked at index [%lu] = [%d]\n",
list->index, list->n);
if (list->n == value)
break;
list = list->next;
}
if (list != _list->express)
return (list);
return (NULL);
}

#include "hashtables.h"
/**
* hash_table_create - this function creates a hash table
* @size: is size of the array of the hash table
* Return: Returns the Pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;
if (size == 0)
return (NULL);
ht = malloc(sizeof(hash_table_t));
if (!ht)
return (NULL);
ht->size = size;
ht->array = calloc((size_t)ht->size, sizeof(hash_node_t *));
if (ht->array == NULL)
return (NULL);
return (ht);
}

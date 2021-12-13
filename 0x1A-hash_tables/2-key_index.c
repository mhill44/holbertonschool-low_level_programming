#include "hashtables.h"

/**
* key_index - this gives the index of a key in a hash table
* @key: is the key to find the index of
* @size: is size of the array of indexes
* Return: returns the index at which the key/value pair should
* be stored in the array of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash;
if (size == 0)
return (0);
hash = hash_djb2(key);
return (hash % size);
}

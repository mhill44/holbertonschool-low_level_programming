#include "hashtables.h"
/**
* hash_djb2 - is a hash function implementing the djb2 algorithm
* @str: is the string to hash
* Return: returns the hash index corresponding to the string
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;
hash = 5381;
while ((c = *str++))
{
hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
}
return (hash);
}

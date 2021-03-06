#ifndef HASHTABLES_H
#define HASHTABLES_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*
*#define UNUSED __attribute__((unused))
*/
/**
* struct hash_node_s - Is a Node of a hash table
* @key: This Is The key, string
* The key is unique in the HashTable
* @value: This Is The value corresponding to a key
* @next: Is the pointer to the next node of the List
*/
typedef struct hash_node_s
{
char *key;
char *value;
struct hash_node_s *next;
} hash_node_t;
/**
* struct hash_table_s - The Hash table data structure
* @size: The size of the array
* @array: An array of size @size
* Each cell of this array is a pointer to the first node of a linked list,
* because we want the HashTable to use chain collision handling
*/
typedef struct hash_table_s
{
unsigned long int size;
hash_node_t **array;
} hash_table_t;
/**
* functions
*/
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
int attach_node_to_ht(hash_table_t *ht, hash_node_t *node);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
void freenode(hash_node_t *node);

#endif /** HASHTABLES_H */

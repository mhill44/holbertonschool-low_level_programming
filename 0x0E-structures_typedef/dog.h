#ifndef DOG_H
#define DOG_H
/**
* struct dog - library of a dog's basic info
* @name: the First member
* @age: The Second member
* @owner: The Third member
* Description: Is the Longer description
*/
struct dog
{
char *name;
float age;
char *owner;
};
/**
* dog_t - typedef. for struct named dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

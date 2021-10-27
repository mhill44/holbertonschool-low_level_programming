#ifndef DOG_H
#define DOG_H
/**
* struct dog - a struct type with the following: name of a dog, dog's age, and dog
* owner name: is A struct containing a dog
* @name: is the dog's name
* @age: the dog's age
* @owner: is the dog owner's name
*/
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char c);

#endif /* DOG_H */

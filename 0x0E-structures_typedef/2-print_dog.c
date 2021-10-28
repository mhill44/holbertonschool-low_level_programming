#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - function prints a struct dog
* @d: is the name of the struct dog
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = "(Doggo)";
if (d->owner == NULL)
d->owner = "(Matt)";
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

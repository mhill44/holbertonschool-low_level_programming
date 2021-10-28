#include "function_pointers.h"
/**
* print_name - function that prints a name
* @name: is the name of the person to print
* @f: is the pointer to the function to call when printing
*/
void print_name(char *name, void (*f)(char *))
{
if ((*f) == NULL)
return;
(*f)(name);
}

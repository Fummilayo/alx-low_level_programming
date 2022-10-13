#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: a pointer variable
 * @f: a function pointer
 * Return : it returns 0
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}

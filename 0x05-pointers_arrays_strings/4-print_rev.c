#include "main.h"
#include <string.h>
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: a pointer variable
 * Return: Always 0 (success)
 */
void print_rev(char *s)
{ int i, l;
l = strlen(s);
for (i = l - 1; i > 0; i--)
{
_putchar(s[i]);
}
}

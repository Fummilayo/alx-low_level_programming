#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: a pointer variable
 * Return: it returns i
 */
int _strlen_recursion(char *s)
{ int i = 0;
if (*s != '\0')
{
i = 1 + _strlen_recursion(s + 1);
return (i);
}
else
{
return (0);
}
}

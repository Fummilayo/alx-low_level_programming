#include "main.h"
/**
 * _strchr -  a function that locates a character in a string.
 * @s: a pointer variable
 * @c: The first occurrence of the character
 * Return: it returns a pointer to the first occurrence of the character c
 *
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
else if (*(s + 1) == c)
return (s + 1);
s++;
}
return (s + 1);
}

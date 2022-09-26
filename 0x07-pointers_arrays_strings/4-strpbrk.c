#include "main.h"
/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 * @s: a string variablr
 * @accept: string to match
 * Return: it returns  pointer to the byte in
 * s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{ int i, k;
char *t;
i = 0;
while (s[i] != '\0')
{
k = 0;
while (accept[k] != '\0')
{
if (accept[k] == s[i])
{
t = &s[i];
return (t);
}
k++;
}
i++;
}
return (0);
}

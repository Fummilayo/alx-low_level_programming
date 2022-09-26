#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: char string array
 * @accept:char array string
 * Return: Returns the number of bytes in the initial segment of s
 *
 */
unsigned int _strspn(char *s, char *accept)
{ int i, j, k;
i = 0;
k = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
k++;
break;
}
j++;
}
if (accept[j] == '\0')
break;
i++;
}
return (k);
}

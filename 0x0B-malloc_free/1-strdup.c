#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Write a function that returns a pointer to
 * a newly allocated space in memory, which
 * contains a copy
 * of the string given as a parameter.
 * @str: the source string
 * Return: It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
char *s;
unsigned int i;
int len = 0;
if (str == NULL)
return (NULL);
while (str[len] != '\0')
len++;
s = (char *)malloc((sizeof(char) * len) +1);
if (s == NULL)
return (NULL);
for (i = 0; i < len; i++)
s[i] == str[i];
s[len] = '\0';
return (s);
}

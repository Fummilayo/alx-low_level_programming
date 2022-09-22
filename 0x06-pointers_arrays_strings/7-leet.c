#include "main.h"
/**
 * *leet - a function that encodes a string into 1337.
 * @str: a pointer variable
 * Return: encoded string
 */
char *leet(char *str)
{ int i = 0, index;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
while (str[i])
{
for (index = 0; index <= 7; index++)
{
if (str[i] == leet[index] ||
str[i] - 32 == leet[index])
str[i] = index + '0';
}
i++;
}
return (str);
}

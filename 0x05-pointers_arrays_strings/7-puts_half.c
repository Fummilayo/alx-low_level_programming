#include "main.h"
#include <string.h>
/**
* puts_half - a function that prints half of a string,
* followed by a new line.
* @str: a pointer variable
* Return: Always 0 (success)
*/
void puts_half(char *str)
{ int i, length;
length = strlen(str);
for (i = 0; i < length; i++)
;
for (i /= 2; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

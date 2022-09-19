#include "main.h"
#include <string.h>
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: a pointer variable
 * Return: Always 0 (success)
 */
void puts2(char *str)
{ int i, length;
length = strlen(str);
for (i = 0; i < length; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}

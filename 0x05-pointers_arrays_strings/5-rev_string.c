#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - a function that reverses a string.
 * @s: a pointer variable
 * Return: Always 0 (success)
 */
void rev_string(char *s)
{ int i, l, j, temp;
i = strlen(s);
l = i;
for (i--, j = 0; j < 1 / 2; i--, j++)
{ temp = s[j];
s[j] = s[i];
s[i] = temp;
}
}

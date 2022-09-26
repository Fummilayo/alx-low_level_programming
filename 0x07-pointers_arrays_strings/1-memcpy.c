#include "main.h"
/**
 * *_memcpy - a function that copies memory area.
 * @dest: a pointer variable
 * @src: a pointer variable
 * @n: number of bytes
 * Return: it returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{ unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

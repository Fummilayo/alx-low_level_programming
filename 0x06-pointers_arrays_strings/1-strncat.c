#include "main.h"
#include <string.h>
/**
 * *_strncat - a function that concatenates two strings.
 * @dest: a pointer variable
 * @src: a pointer variable
 * @n: an integer variable
 * Return: it returns dest
 */
char *_strncat(char *dest, char *src, int n)
{ strncat(dest, src, n);
return (dest);
}

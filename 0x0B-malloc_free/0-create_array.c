#include "main.h"
#include <stdlib.h>
/**
 * create_array - Write a function that creates an
 * array of chars, and initializes it with a specific char.
 * @size: the size of the array
 * @c: a single variable
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
char *array;
int i;
if (size == 0)
return (NULL);
array = (char *)malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}

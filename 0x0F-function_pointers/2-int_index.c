#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: an array of integers
 * @size: the size of an array
 * @cmp: the function pointer
 * Return: it returns -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size > 0)
{
if (array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
}
return (-1);
}

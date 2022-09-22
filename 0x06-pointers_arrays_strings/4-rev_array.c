#include "main.h"
/**
 * reverse_array - a function
 * that reverses the content of an array of integers.
 * @a: a pointer variable
 * @n: the number of elements in an array
 * Return: Always 0 (success)
 */
void reverse_array(int *a, int n)
{ int i, len;
for (i = 0; i < n / 2; i++)
{
len = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = len;
}
}

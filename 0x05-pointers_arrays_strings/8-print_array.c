#include <stdio.h>
#include "main.h"
/**
 * print_array -  a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: a variable pointer
 * @n: variable
 * Return: Always 0 (success)
 */
void print_array(int *a, int n)
{ int i;
for (i = 0; i < n; i++)
{
printf("%d ", a[i]);
printf(" ,");
}
printf("\n");
}

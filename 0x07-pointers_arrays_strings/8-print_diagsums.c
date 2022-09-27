#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 * Return: void
 */
void print_diagsums(int *a, int size)
{ int i, b, c, d = 0, e = 0;
for (i = 0; i < size; i++)
{
c = (i * size) + i;
d += *(a + c);
}
for (b = 0; b < size; b++)
{
c = (b * size) + (size - 1 - j);
e += *(a + p);
}
printf("%i, %i\n", d, e);
}

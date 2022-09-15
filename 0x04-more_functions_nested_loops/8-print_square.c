#include "main.h"
/**
 * print_square - a function that prints a square
 * @size: points out the size of the square
 * Return: Always 0
 */
void print_square(int size)
{ int c, n;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (c = 1; c <= size; c++)
{
_putchar('#');
for (n = 2; n <= size; n++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

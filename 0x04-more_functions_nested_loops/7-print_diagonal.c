#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: prints single character
 * Return: Always 0
 *
 */
void print_diagonal(int n)
{ int c, i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (c = 1; c <= n; c++)
{
for (i = 1; i < c; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}

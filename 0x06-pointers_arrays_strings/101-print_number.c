#include "main.h"
/**
 * print_number -  a function that prints an integer.
 * @n: a variable n
 * Returns: returns 0(success)
 */
void print_number(int n)
{ unsigned int s;
if (n < 0)
{
_putchar('-');
n *= -1;
}
s = n;
if (s / 10)
print_number(s / 10);
_putchar(s % 10 + '0');
}

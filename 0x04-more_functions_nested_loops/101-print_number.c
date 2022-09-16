#include "main.h"
/**
 * print_number - Function that prints an integer.
 * @n: int type number
 *Return: 0 Always
 *
 */
void print_number(int n)
{
long i;
int j;
long number;
number = n;
if (number < 0)
{
number *= -1;
_putchar('-');
}
i = 1;
j = 1;
while (j)
{
if (number / (i * 10) > 0)
{
i *= 10;
}
else
{
j = 0;
}
}
while (number >= 0)
{
if (i == 1)
{
_putchar(number % 10 + '0')
number = -1;
}
else
{
_putchar((num / m % 10) + '0');
i /= 10;
}
}
}

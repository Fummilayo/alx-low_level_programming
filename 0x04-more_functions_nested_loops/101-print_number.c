#include "main.h"
/**
 * print_number - Function that prints an integer.
 * @n: int type number
 *Return: 0 Always
 *
 */
void print_number(int n)
{
long i; /* power of 10 */
int j; /* boolean check */
long number; /* convert int to long */
number = n;
/* negatives */
if (number < 0)
{
number *= -1;
_putchar('-');
}
/* count up */
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
/* count down */
while (number >= 0)
{
if (i == 1)
{
_putchar(number % 10 + '0')
number = -1;
}
else
{
_putchar((number / i % 10) + '0');
i /= 10;
}
}
}

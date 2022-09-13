#include "main.h"
/**
 *print_last_digit - a function that prints the last digit of a number
 * @n: number's last digit result
 *Return: value of the last digit
 */
int print_last_digit(int n);
{
int x;
if ( n < 0)
{
n = -n;
x = n % 10;
}
_putchar(x + '0');
return (x);
}

#include "main.h"
#include <stdio.h>
/**
 * sqrt_number - checks for the square root
 * @i: variable
 * @j: variable
 * Return: int
 */

int sqrt_number(int i, int j)
{
if (i * i == j)
return (i);
if (i * i > j)
return (-1);
return (sqrt_number(i + 1, j));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (sqrt_number(1, n));
}

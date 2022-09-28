#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number.
 * @n: a pointer variable
 * Return: If n is lower than 0,the function should
 * return -1 to indicate an error
 */
int factorial(int n)
{
int length;
if (n == 1 || n == 0)
return (1);
else if (n < 0)
return (-1);
length = n * factorial(n - 1);
return (length);
}

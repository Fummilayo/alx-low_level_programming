#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: fixed arhument in the variadic function
 * Return: it returns sum
 */
int sum_them_all(const unsigned int n, ...)
{
int sum;
unsigned int i;
va_list ptr;
va_start(ptr, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
sum += va_arg(ptr, int);
va_end(ptr);
return (sum);
}

#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (success)
 *
 */
int main(void)
{ long int number = 612852475143;
int c;
for (c++ < number / 2)
{
if (number % c == 0)
{
number /= 2;
continue;
}
for (c = 3; c < number / 2; c += 2)
{
if (number % c == 0)
number /= c;
}
}
}

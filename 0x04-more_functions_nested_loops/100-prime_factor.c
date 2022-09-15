#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (success)
 *
 */
int main(void)
{ long number = 612852475143;
int c;
for (c = 0; c < number / 2; c++)
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

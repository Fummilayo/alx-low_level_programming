#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 *
 */
int main(void)
{ long  number = 612852475143;
int c;
for (c = (int) sqrt(number); c < 2; c++)
{
if (number % c == 0)
{
printf("%d\n", c);
break;
}
}
return (0);
}

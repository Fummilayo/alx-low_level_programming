#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{int n;
int digit = n % 10;	
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n,digit);
}	
if (n == 0)
{
printf("Last digit of n is %d and is 0\n", n);
}
if (n < 6)
{
printf("Last digit of n is %d and is less than 6 and not 0\n", n);
}	
return (0);
}







nclude <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * Main function - Entry point
 *
* Return: 0(success)
*/
int main(void)
{int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if( n > 0)
{
printf("n is positive \n");
}	
if( n == 0)
{
printf("n is zero \n");
}	
if(n < 0)
{
printf("n is negative");
}	
return (0);
}







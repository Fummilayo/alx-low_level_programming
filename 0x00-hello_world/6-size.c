#include <stdio.h>
/**
 * main : Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
long ii;
long long iii;
char c;
float f;
printf("Size of a char: %d byte(s)\n", sizeof(c));
printf("Size of a int: %d byte(s)\n", sizeof(i));
printf("Size of a long int: %d byte(s)\n", sizeof(ii));
printf("Size of a long long int: %d byte(s)\n", sizeof(iii));
printf("Size of a float: %d byte(s)\n", sizeof(f));
return (0);
}	

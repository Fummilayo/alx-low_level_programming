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

printf("Size of a char: %ld byte(s)\n", sizeof(c));
printf("Size of a int: %ld byte(s)\n", sizeof(i));
printf("Size of a long int: %ld byte(s)\n", sizeof(ii));
printf("Size of a long long int: %ld byte(s)\n", sizeof(iii));
printf("Size of a float: %ld byte(s)\n", sizeof(f));
return (0);
}	

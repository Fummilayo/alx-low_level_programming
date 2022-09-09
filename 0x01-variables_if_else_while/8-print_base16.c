#include <stdio.h>
/*
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{int hexa_decimal;
char letter;
for( hexa_decimal = 0; hexa_decimal < 10; hexa_decimal++)
{
putchar((hexa_decimal % 10) + '0');
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}

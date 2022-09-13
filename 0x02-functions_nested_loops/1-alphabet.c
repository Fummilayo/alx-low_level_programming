#include "main.h"
/*
 * main - entry point
 *
 * Return: Always 0(success)
 */
void print_alphabet(void)
{ int i = 0;
while (i < 10)
{ 
char alphabet  = 'a';
while(alphabet < 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
i++;
}
}

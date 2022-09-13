#include "main.h"
/*
 * main - entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{ int i = 0;
while (i < 10)
{ 
char alphabet  = 'a';
while(alphabet < 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
i++;
}
}

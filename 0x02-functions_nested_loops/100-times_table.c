#include "main.h"
#include <stdio.h>
/**
* print_times_table - outputs times tables 9x9
* @n: column and row size (Always the same)
* returns - void
*/
void print_times_table(int n)

{ int rol, con, j;
if (n <= 15 && n > 0)
{
for (rol = 0; rol <= n; ++rol)
{
_putchar('0');
_putchar(',');
for (con = 1; con <= n; ++con)
{
j = con * rol;
_putchar(' ');
if (j / 100  >= 1)
{
_putchar('0' + j / 100);
_putchar('0' + j / 10 % 10);
_putchar('0' + j % 10);
}
else if (j / 10 >= 1)
{
_putchar(' ');
_putchar('0' + j / 10);
_putchar('0' + j % 10);
}
else
{
_putchar(' ');
_putchar(' ');
_putchar('0' + j);
}
if (con < n)
_putchar(',');
else
_putchar('\n');
}
}
}
}

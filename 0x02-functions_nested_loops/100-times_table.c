#include "main.h"
#include <stdio.h>
/**
* print_times_table - outputs times tables 9x9
* @n: column and row size (Always the same)
* returns - void
*/
void print_times_table(int n)

{ int rol, con, p;
if (n <= 15 && n > 0)
{
for (rol = 0; rol <= n; rol++)
{
for (con = 0; con <= n; con++)
{
p = con * rol;
if (con == 0)
{
_putchar(p + '0');
}
else if (p < 10 && con != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(p + '0');
}
else if (p >= 10 && p < 100)
{
_putchar(',');
_putchar(',');
_putchar(' ');
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
}
else if (p >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((p / 100) + '0');
_putchar(((p / 10) % 10) + '0');
_putchar((p % 10) + '0');
}
}
_putchar('\n');
}
}
}

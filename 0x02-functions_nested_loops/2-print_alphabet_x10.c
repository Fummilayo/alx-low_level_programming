#include "main.h"
/**
 * print_alphabet_x10 - prints the lowercase alphabets
 *
 */
void print_alphabet_x10(void)
{ int i;
int alphabet;
for (i = 0; i < 10; i++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
}


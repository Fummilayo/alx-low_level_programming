#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: a pointer varaiable
 * Return: it returns 0 (Always success)
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
_putchar('\n');
else
{
_putchar(*s);
_puts_recursion(++s);
}
}

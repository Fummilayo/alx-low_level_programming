#include "main.h"
/**
 * swap_int -  a function that swaps the values of two integers.
 *  @a: a variable that is swaped with the other variable b.
 * @b: a variable that is swaped with the other variable a.
 * Return: Always 0 (success)
 */
void swap_int(int *a, int *b)
{ int swap;
swap = *a;
*a = *b;
*b = swap;
}

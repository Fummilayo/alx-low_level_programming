#include "lists.h"
#include <stdio.h>
/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list.
 * @h: head noide
 * Return: it returns the number of elements
 *
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}

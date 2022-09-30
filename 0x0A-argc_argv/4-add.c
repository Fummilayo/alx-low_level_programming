#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - add 2 positive numbers and print the result
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Return: 1 if error, 0 if function runs properly.
 */
int main(int argc, char *argv[])
{
int sum, i;
char *s;
int num;
sum = 0;
if (argc > 1)
{
for (i = 1; argv[i]; i++)
{
num = strtol(argv[i], &s, 10);
if (!*s)
{
sum += num;
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}

#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: it returns 0 and returns 1, if there is an error
 */
int main(int argc, char *argv[])
{
(void) argc;
if (argv[1] && argv[2])
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
else
{
printf("Error\n");
return (1);
}
}

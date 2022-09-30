#include "main.h"
#include <stdio.h>
/**
 * main - print all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: it returns 0
 */
int main(int argc, char *argv)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

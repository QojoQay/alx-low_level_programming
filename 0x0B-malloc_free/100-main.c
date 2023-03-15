#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - check the code for ALX School students.
* @ac: the number of command line arguments passed to the program
* @av: an array of strings containing the command line arguments
* Return: Always 0.
*/
int main(int ac, char *av[])
{
char *s;

s = argstostr(ac, av);
if (s == NULL)
{
return (1);
}
printf("%s", s);
free(s);
return (0);
}

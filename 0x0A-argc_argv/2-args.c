#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: count arguments
 * @argv: Arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{

/*Declaring variables*/
int count = 0;

if (argc > 0)
{
/* while - prints each arguments*/
while (count < argc)
{
printf("%s\n", argv[count]);
}
}
return (0);
}

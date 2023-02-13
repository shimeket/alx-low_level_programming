#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 on Success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}

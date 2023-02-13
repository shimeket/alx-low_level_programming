#include "main.h"
#include <stdio.h>

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
		printf("%s\n", argv[count]);
		count++;
		}
	}

	return (0);
}

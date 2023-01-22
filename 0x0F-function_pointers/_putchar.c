#include "function_pointers.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: 1 on success -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

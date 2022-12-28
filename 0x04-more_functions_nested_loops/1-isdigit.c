#include "main.h"

/**
 * _isdigit - checks for a digit
 *@c: tested character
 *Return: 1 f c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
		return (0);
}

#include "main.h"

int find_sqrt(int n, int r);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds the natural square root of a number
 * @n: the number to find the square root of
 * @r: the root to be tested
 * Return: square root otherwise -1
 */
int find_sqrt(int n, int r)
{
	if ((r * r) == n)
		return (r);
}

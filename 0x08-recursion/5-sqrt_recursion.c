#include "main.h"
/**
 * est- estimates the square root of a number
 * @n: original input varable
 * @x: estimate variable
 * Return: square root estimate or -1 if estimate is too high
 */
int est(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (est(n, x + 1));
}
#include "main.h"
/**
 * _sqrt_recursion- finds the square root of a number
 * @n: input variable
 * Return: square root or -1 if input is not a natural number
 */
int _sqrt_recursion(int n)
{
	int x = 1;

	return (est(n, x));
}

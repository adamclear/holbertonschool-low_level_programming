#include "main.h"
/**
 * find_prime- tests until determines prime or not
 * @n: input variable
 * @x: test number
 * Return: 1 if n is prime, 0 if not
 */
int find_prime(int n, int x)
{
	if (x == n)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	return (find_prime(n, x + 1));
}
/**
 * is_prime_number- recursively determines if a number is prime or not
 * @n: input variable
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	int x = 2;

	if (n <= 1)
	{
		return (0);
	}
	return (find_prime(n, x));
}

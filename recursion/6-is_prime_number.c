#include "main.h"

/**
 * _is_prime_helper - checks recursively if n is divisible by div
 * @n: number to check
 * @div: current divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int _is_prime_helper(int n, int div)
{
	if (div * div > n)
		return (1);
	if (n % div == 0)
		return (0);
	return (_is_prime_helper(n, div + 1));
}

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_is_prime_helper(n, 2));
}

#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long long n = 612852475143ULL;
    unsigned long long max_factor = 0;
    unsigned long long i;

    /* Remove factors of 2 */
    while (n % 2 == 0)
    {
        max_factor = 2;
        n /= 2;
    }

    /* Check for odd factors from 3 to sqrt(n) */
    for (i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            max_factor = i;
            n /= i;
        }
    }

    /* If remaining n is a prime number > 2 */
    if (n > 2)
        max_factor = n;

    printf("%llu\n", max_factor);

    return (0);
}


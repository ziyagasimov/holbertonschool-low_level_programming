#include "main.h"

/**
 * main - prints _putchar followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
    char *str = "_putchar";

    while (*str)
        _putchar(*str++);

    _putchar('\n');

    return (0);
}


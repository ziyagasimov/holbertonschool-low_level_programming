#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point for simple calculator program
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Description: performs simple arithmetic operations (+, -, *, /, %)
 *              using function pointers.
 *
 * Return: 0 on success, exits with 98, 99, or 100 on error
 */
int main(int argc, char *argv[])
{
	int (*op_func)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_func(num1, num2));

	return (0);
}

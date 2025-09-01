#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: string to print
 * @f: function pointer to a function that takes a char* argument
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

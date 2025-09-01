#include <stdio.h>

/**
 * print_name - Calls a function to print a name
 * @name: String with the name
 * @f: Pointer to a function that takes a char* and returns nothing
 *
 * Description: This function checks if both the name and the function
 * pointer are valid, then calls the function pointer to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}

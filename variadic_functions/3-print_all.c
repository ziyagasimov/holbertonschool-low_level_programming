#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything based on a format string
 * @format: string representing argument types
 *          c = char, i = int, f = float, s = string
 *
 * Description: Prints arguments separated by ", "
 *              Prints (nil) if a string is NULL
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, printed = 0;
	char *str;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		    format[i] == 'f' || format[i] == 's')
		{
			if (printed)
				printf(", ");

			if (format[i] == 'c')
				printf("%c", va_arg(args, int));
			else if (format[i] == 'i')
				printf("%d", va_arg(args, int));
			else if (format[i] == 'f')
				printf("%f", va_arg(args, double));
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
			}
			printed = 1;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

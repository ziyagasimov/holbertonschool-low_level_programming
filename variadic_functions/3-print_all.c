#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything based on a format string
 * @format: string representing argument types
 *          c = char, i = int, f = float, s = string
 *
 * Description: Prints arguments separated by ", "
 *              Prints (nil) if a string is NULL
 *              Ignores unknown formats
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, printed = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		    format[i] == 'f' || format[i] == 's')
		{
			if (printed)
				printf(", ");

			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
					{
						printf("(nil)");
						break;
					}
					printf("%s", str);
					break;
			}
			printed = 1;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

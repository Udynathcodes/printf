#include "main.h"

/**
 * _printf - printf replica.
 * @format: formatted strings.
 * @...: variadic function.
 * Return: num_of_char
 */

int _printf(const char *format, ...)
{
	int a, num_of_char = 0;
	va_list list_of_args;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(list_of_args, format);
	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] == '%')
		{
			a++;
			if (format[a] == '\0' || format[a] == ' ')
			{
				return (-1);
			}
			else
			{
				num_of_char += _supporter(list_of_args, format[a]);
			}
		}
		else
		{
			write(1, &format[a], 1);
			num_of_char++;
		}
	}
	va_end(list_of_args);
	return (num_of_char);
}

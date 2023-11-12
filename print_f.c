#include "main.h"

/**
 *_printf - formatted print.
 *@format: character pointer.
 *Return: lenght which is char_to_print.
 */

int _printf(const char *format, ...)
{
	int char_to_print = 0;
	va_list list_of_args;
	int k = 0;

	va_start(list_of_args, format);

	if (format == NULL)
		return (-1);
	while (format[k] != '\0')
	{
		if (format[k] != '%')
		{
			write(1, &format[k], 1);
			char_to_print++;
		}
		else
		{
			if (format[k] == '%')
			{
				k++;
				char_to_print += percent(list_of_args, format[k]);
			}
		}
		k++;
	}
	va_end(list_of_args);
	return (char_to_print);
}

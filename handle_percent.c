#include "main.h"

/**
 * percent - prints percent sign.
 * @format: prints formatted text.
 * @list_of_args: list of arguments.
 * Return: lenght which is char_to_print.
 */

int percent(va_list list_of_args, const char format)
{
	int char_to_print = 0;

	if (format == '\0' || format == ' ')
	{
		return (-1);
	}
	else if (format == '%')
	{
		write(1, &format, 1);
		char_to_print++;
	}
	else if (format == 'c')
	{
		char_to_print += print_char(va_arg(list_of_args, int));
	}
	else if (format == 's')
	{
		char_to_print += _strings(va_arg(list_of_args, char*));
	}
	else
	{
		char_to_print += print_char('%');
		char_to_print += print_char(format);
	}
	return (char_to_print);

}


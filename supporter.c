#include "main.h"

/**
 * _supporter - assitance printf.
 * @format: format.
 * @list_of_args: pointer to list.
 * Return: num_of_char.
 */

int _supporter(va_list list_of_args, const char format)
{
	int num_of_char = 0;

	if (format == 'i')
	{
		num_of_char += print_int(va_arg(list_of_args, int));
	}
	else if (format == 's')
	{
		num_of_char += string_print(va_arg(list_of_args, char *));
	}
	else if (format == '%')
	{
		num_of_char += print_cent('%');
	}
	else if (format == 'c')
	{
		num_of_char += char_print(va_arg(list_of_args, int));
	}
	else if (format == 'd')
	{
		num_of_char += print_int(va_arg(list_of_args, int));
	}
	else
	{
		num_of_char += char_print('%');
		num_of_char += char_print(format);
	}
	return (num_of_char);
}

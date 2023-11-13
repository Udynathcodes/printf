#include "main.h"

/**
 * string_print - function that prin string.
 * @str: string pointer.
 * Return: The length of the string.
 */

int string_print(char *str)
{
	int num_of_char = 0;
	int str_len = 0;
	char *nul;

	if (str == NULL)
	{
		nul = ("(null)")
		while (nul[str_len] != '\0')
		{
			_putchar(nul[str_len]);
			str_len++;
		}
		return (6);
	}
	while (str[str_len] != '\0')
	{
		_putchar(str[str_len])
		str_len++;
		num_of_char++;
	}
	return (num_of_char);
}

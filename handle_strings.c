#include "main.h"

/**
 *_strings - prints strings.
 *@str: string.
 *Return: lenght.
 */

int _strings(char *str)
{
	int str_len = 0;
	int char_to_print = 0;
	char *nul;

	if (str == NULL)
	{
		nul = "(null)";
		while (nul[str_len] != '\0')
		{
			write(1, &nul[str_len], 1);
			str_len++;
			char_to_print++;
		}
		return (6);
	}
	while (str[str_len] != '\0')
	{
		write(1, &str[str_len], 1);
		str_len++;
		char_to_print++;
	}
	return (char_to_print);
}

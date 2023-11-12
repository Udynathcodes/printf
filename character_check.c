#include "main.h"

/**
 * print_char - prints character to the stout.
 * @c: character to check.
 * Return: char_to_print.
 *
 */

int print_char(char c)
{
	int char_to_print = 0;

	write(1, &c, 1);
	char_to_print++;
	return (char_to_print);

}

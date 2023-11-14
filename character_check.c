#include "main.h"

/**
 * char_print - prints character to the stout.
 * @c: character to check.
 * Return: num_of_char.
 *
 */

int char_print(char c)
{
	int num_of_char = 0;

	write(1, &c, 1);
	num_of_char++;

	return (num_of_char);

}

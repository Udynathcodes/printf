#include "main.h"

/**
 * print_cent - prints percent sign.
 * @c: character.
 * Return: lenght which is num_of_char.
 */

int print_cent(char c)
{
	int num_of_char = 0;

	write(1, &c, 1);
	num_of_char++;

	return (num_of_char);
}

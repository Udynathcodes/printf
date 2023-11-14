#include "main.h"
/**
 * print_int - prints an integer.
 * @i: The integer.
 * Return: num_of_char
 */
int print_int(int i)
{
	int num, num_of_char = 0, value = 0, a = 0;
	char *ptr;

	if (i == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (i < 0)
	{
		value = 1;
		i = -i;
	}
	num = i;
	while (num != 0)
	{
		num = num / 10;
		num_of_char++;
	}
	ptr = (char *)malloc(sizeof(char) * (num_of_char + 1));
	if (ptr == NULL)
	{
		return (-1);
	}
	for (a = num_of_char - 1; a >= 0; a--)
	{
		ptr[a] = (i % 10) + '0';
		i = i / 10;
	}
	ptr[num_of_char] = '\0';
	if (num)
	{
		write(1, "-", 1);
	}
	for (a = 0; a < num_of_char; a++)
	{
		write(1, &ptr[a], 1);
	}
	free(ptr);
	return (num_of_char + value);
}

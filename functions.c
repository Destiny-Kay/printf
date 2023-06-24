#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * print_char- prints a character to the standard output
 * @c: the character to be printed
 * Return: number of bytes printed to the standard output
*/
int print_char(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

/**
 * print_string- prints a string of chars to the standard output
 * @c: the character string
 * Return: number of bytes printed out to the standard output
*/
int print_string(char *c)
{
	int i = 0;

	while (*c != '\0')
	{
		print_char(c[i]);
		i++;
	}
	return (i);
}

/**
 * print_int- prints an integer to the standard output
 * @a: the integer to be printed
 * Return: number of bytes printed to the standard output
*/
int print_int(int a)
{
	return (print_char(a));
}

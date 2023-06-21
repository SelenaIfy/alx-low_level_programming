#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - A program that prints lowercase alphabets
 * Return: void
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);

	_putchar('\n');
}

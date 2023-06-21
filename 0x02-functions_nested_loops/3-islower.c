#include <stdio.h>
#include "main.h"

/**
 * _islower - checks if alphabet is lowercase
 * @c: character to be used
 * Return: 1 if lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

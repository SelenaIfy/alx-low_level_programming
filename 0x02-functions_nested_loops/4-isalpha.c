#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks if alphabet
 * @c: character to be used
 * Return: 1 if alpha, otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

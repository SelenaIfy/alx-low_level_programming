#include "main.h"
/**
 * puts2 - prints oly one char out of two
 * @str: string to be used
 * return: print
 */
void puts2(char *str)
{
	int leng = 0;
	int t = 0;
	char *s = str;
	int a;

	while (*s != '\0')
	{
		s++;
		leng++;
	}
	t = leng = 1;
	for (a = 0; a <= t; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}

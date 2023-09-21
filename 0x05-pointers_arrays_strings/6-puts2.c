#include "main.h"
#include <stdio.h>
/**
 * puts2 - Print one char in succession of 2's
 * @str: Type char pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}

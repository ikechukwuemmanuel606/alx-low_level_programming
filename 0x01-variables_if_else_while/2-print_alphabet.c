#include <stdio.h>

/**
* main - A program that prints alphabets
*
* Return: 0 (success)
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);

		putchar('\n');
	}
	return (0);
}

#include <stdio.h>
/**
* main - A program that prints alphabets in lowercasein reverse order
*
* Return: 0 (success)
*/
int main(void)
{
	char str;

	for (str = 'z'; str >= 'a'; str--)
	{
		putchar(str);
	}
		putchar('\n');
	return (0);
}

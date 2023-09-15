#include <stdio.h>
/**
* main - A program that prints alphabets in lowercase
*
* Return: 0 (success)
*/
int main(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
	{
		if (str != 'e' && str != 'q')
			putchar(str);
	}
			putchar('\n');
		return (0);
}

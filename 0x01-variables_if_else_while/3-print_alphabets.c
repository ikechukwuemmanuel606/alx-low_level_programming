#include <stdio.h>
/**
* main - A program that prints alphabets in lowercaseand uppercase
*
* Return: 0 (success)
*/
int main(void)
{
        char str;
        for (str = 'a'; str <= 'z'; str++)
        {
                putchar(str);
        }
	for (str = 'A'; str <= 'Z'; str++)
	{
		putchar(str);
	}
                putchar('\n');
        return (0);
}

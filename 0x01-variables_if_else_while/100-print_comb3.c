#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s = 0, e = 8, s1 = 1, e1 = 9;

	while (s <= e)
	{
		s1 = s + 1;
		while (s1 <= e1)
		{
			putchar(s + '0');
			putchar(s1 + '0');
			if (s != e)
			{
				putchar(',');
				putchar(' ');
			}
			s1++;
		}
		s++;
	}

	putchar('\n');

	return (0);
}

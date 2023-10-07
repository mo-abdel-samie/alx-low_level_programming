#include <stdio.h>

/**
 * main - function that make proces
 * Description: function for make proces
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int ch1;
	int count = 0;

	while (i <= 98)
	{
		ch1 = i + 1;
		while (ch1 <= 99)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((ch1 / 10) + '0');
			putchar((ch1 % 10) + '0');
			if (count != 4949)
			{
				putchar(',');
				putchar(' ');
			}
			ch1++;
			count++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

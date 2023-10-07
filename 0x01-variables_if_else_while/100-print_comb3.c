#include <stdio.h>

/**
 * main - function that make proces
 * Description: function for make proces
 * Return: 0
 */
int main(void)
{
	int ch = 0;
	int ch1;
	int count = 0;

	while (ch <= 8)
	{
		ch1 = ch + 1;
		while (ch1 <= 9)
		{
			putchar(ch + '0');
			putchar(ch1 + '0');
			if (count != 44)
			{
				putchar(',');
				putchar(' ');
			}
			ch1++;
			count++;
		}
		ch++;
	}
	putchar('\n');
	return (0);
}

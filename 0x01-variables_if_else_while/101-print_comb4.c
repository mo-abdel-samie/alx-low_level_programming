#include <stdio.h>

/**
 * main - function that make proces
 * Description: function for make proces
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int ch1, k;
	int count = 0;

	while (i <= 7)
	{
		ch1 = i + 1;
		while (ch1 <= 8)
		{
			k = ch1 + 1;
			while (k <= 9)
			{
				putchar(i + '0');
				putchar(ch1 + '0');
				putchar(k + '0');
				if (count != 119)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
				count++;
			}
			ch1++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

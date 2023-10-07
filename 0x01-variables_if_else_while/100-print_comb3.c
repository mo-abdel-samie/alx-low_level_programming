#include <stdio.h>

/**
 * main - function that make proces
 * Description: function for make proces
 * Return: 0
 */
int main(void)
{
	int sch, sch1;

	for (sch = '0'; sch <= '9'; sch++)
	{
		for (sch1 = '0'; sch1 <= '9'; sch1++)
		{
			putchar(sch);
			putchar(sch1);
		}

		if (sch1 != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

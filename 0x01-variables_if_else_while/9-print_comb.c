#include <stdio.h>

/**
 * main - function that make proces
 * Description: function for make proces
 * Return: 0
 */
int main(void)
{
	int sch;

	for (sch = '0'; sch <= '9'; sch++)
	{
		putchar(sch);
		if (sch != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

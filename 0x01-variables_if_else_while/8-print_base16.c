#include <stdio.h>

/**
 * main - function that make proces
 * Description: function for make proces
 * Return: 0
 */
int main(void)
{
	char sch;

	for (sch = '0'; sch <= '9'; sch++)
	{
		putchar(sch);
	}

	for (sch = 'a'; sch <= 'f'; sch++)
		putchar(sch);

	putchar('\n');

	return (0);
}

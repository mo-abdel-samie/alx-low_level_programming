#include <stdio.h>

/**
 * main - function that make proces
 * Description: function for make proces
 * Return: 0
 */
int main(void)
{
	char sch;

	for (sch = 'z'; sch >= 'a'; sch--)
	{
		putchar(sch);
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - function that make proces
 * Description: function for make proces
 * Return: 0
 */
int main(void)
{
	char sch;

	for (sch = 'a'; sch <= 'z'; sch++)
	{
		if (sch != 'q' && sch != 'e')
			putchar(sch);
	}

	putchar('\n');

	return (0);
}

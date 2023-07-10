#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - function that print alpabets ten times
 *
 * Return: always (0)
 */
void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)

	{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	
	putchar('\n');
	n++;
	}
}

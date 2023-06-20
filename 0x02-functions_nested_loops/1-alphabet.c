#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function prototype that print alphabets
 *
 * Return: 0
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
	putchar(i);
	}
	putchar('\n');
}

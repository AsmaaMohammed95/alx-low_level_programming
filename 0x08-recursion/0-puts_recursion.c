#include "main.h"
/**
 * _puts_recursion - function that print string
 * @s: a pointer to character to be printed
 * Return : always suceessed
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	else
	{
		_putchar(s[i]);
		i++;
		s++;
		_puts_recursion(s);
		_putchar('\n');
	}
}

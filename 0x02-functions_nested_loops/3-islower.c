#include "main.h"
/**
 * _islower - function that checks the lowercase character
 *
 * @int c: character to be checked
 *
 * Check if a letter is lowercase on the ASCII table
 *
 * Return: (0) if true else (1)
 *
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);

	}
}

#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: array of pointer to char
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc -= 1));
	return (0);
}

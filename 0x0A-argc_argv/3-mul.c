#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: array of pointer to char
 * Return: 0 on successed else 1
 *
 */
int main(int argc, char *argv[])
{
	int n, m, mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		mul = n * m;
		printf("%d\n", mul);
		return (0);
	}
}

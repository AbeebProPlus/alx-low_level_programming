#include <stdlib.h>
#include <stdio.h>
/**
 * main - function
 * @argc: no. of arguments
 * @argv: string array cobtaining arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

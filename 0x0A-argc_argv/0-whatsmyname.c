#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	/* Unused parameter argc */
	(void)argc;

	/* Print the program name */
	printf("%s\n", argv[0]);

	return (0);
}

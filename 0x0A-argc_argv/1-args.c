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
    /* Unused parameter argv */
    (void)argv;

    /* Print the number of arguments */
    printf("%d\n", argc - 1);

    return (0);
}

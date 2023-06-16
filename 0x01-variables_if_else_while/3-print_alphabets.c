#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase, followed by
 * the alphabet in uppercase, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		putchar(uppercase);

	putchar('\n');

	return (0);
}

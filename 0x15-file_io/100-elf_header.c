#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include "main.h"

/**
 * print_error - Prints an error message to stderr and exits with status code 98.
 * @msg: The error message to print.
 */
void print_error(const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}

/**
 * print_magic - Prints the ELF magic numbers.
 * @e_ident: A pointer to the ELF identification array.
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", e_ident[i]);
	printf("\n");
}

/**
 * print_elf_header - Displays information from the ELF header.
 * @fd: The file descriptor of the ELF file.
 */
void print_elf_header(int fd)
{
	Elf64_Ehdr elf_header;
	ssize_t read_result;

	read_result = read(fd, &elf_header, sizeof(elf_header));
	if (read_result == -1 || read_result != sizeof(elf_header))
		print_error("Error: Cannot read ELF header");

	print_magic(elf_header.e_ident);
}

/**
 * main - Entry point of the program.
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int fd;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error: Cannot open file");

	print_elf_header(fd);

	if (close(fd) == -1)
		print_error("Error: Cannot close file");

	return (0);
}

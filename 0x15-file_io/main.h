#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

/* Function prototype for read_textfile */
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(const char *msg);
void print_elf_header(int fd);

/* Function prototypes for other functions in your project (if any) */
/* Example:
 * int some_function(int arg);
 * void another_function(void);
 */

#endif /* MAIN_H */

#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Standard Library Headers */
#include <stdlib.h>

/* Function Prototypes */
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, size_t size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */

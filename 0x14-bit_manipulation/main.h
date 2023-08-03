#ifndef MAIN_H
#define MAIN_H

/* Function prototype for binary_to_uint */
unsigned int binary_to_uint(const char *b);
int _putchar(char c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

/* Function prototypes for other functions in your project (if any) */
/* Example:
 * int some_function(int arg);
 * void another_function(void);
 */

#endif /* MAIN_H */

#include <stdio.h>
#include "main.h"
/**
 * print_name
 * @name
 * f
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	
	f(name);
}

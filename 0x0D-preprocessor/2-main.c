#include <stdio.h>

#ifndef FILENAME
#define FILENAME (__builtin_strrchr(__FILE__, '/') ?	\
			    __builtin_strrchr(__FILE__, '/') + 1 :	\
			    __FILE__)
#endif

int main(void)
{
	printf("%s\n", FILENAME);
	return (0);
}

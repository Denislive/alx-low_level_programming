#include <stdio.h>

#ifndef __FILENAME_MACRO__
#define __FILENAME_MACRO__ (__builtin_strrchr(__FILE__, '/') ?	\
			    __builtin_strrchr(__FILE__, '/') + 1 :	\
			    __FILE__)
#endif

int main(void)
{
	printf("%s\n", __FILENAME_MACRO__);
	return (0);
}

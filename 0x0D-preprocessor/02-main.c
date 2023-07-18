#include <stdio.h>

#ifndef __FILENAME__
#define __FILENAME__ (__builtin_strrchr(__FILE__, '/') ? __builtin_strrchr(__FILE__, '/') + 1 : __FILE__)
#endif

int main(void)
{
    printf("%s\n", __FILENAME__);
    return 0;
}

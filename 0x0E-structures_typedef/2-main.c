#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    /* Initializing the dog */
    init_dog(&my_dog, "Buddy", 3.5, "John");

    /* Printing the dog's information */
    print_dog(&my_dog);

    return 0;
}

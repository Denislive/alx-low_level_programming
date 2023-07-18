#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints information about a struct dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Return: None (void).
 *
 * Description: This function prints the information contained in a
 *              struct dog, including its name, age, and owner. If an
 *              element of the struct is NULL, it prints (nil) instead.
 *              If the pointer d is NULL, nothing is printed.
 */
void print_dog(struct dog *d)
{
    if (d)
    {
        printf("Name: %s\n", d->name ? d->name : "(nil)");
        printf("Age: %.6f\n", d->age);
        printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
    }
}

#include "dog.h"

/**
 * init_dog - Initializes a struct dog.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: None (void).
 *
 * Description: This function initializes the members of a struct dog
 *              with the given name, age, and owner values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}

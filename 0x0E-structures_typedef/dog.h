#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog with its attributes
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/* Function prototypes */
void print_dog(struct dog *d);

#endif /* DOG_H */

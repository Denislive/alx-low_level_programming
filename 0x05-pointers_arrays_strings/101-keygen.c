#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
    srand(time(0)); // Seed the random number generator with current time

    char password[6];
    int i;

    for (i = 0; i < 5; i++)
    {
        password[i] = rand() % 94 + 33; // Generate random printable ASCII characters
    }
    password[5] = '\0'; // Null-terminate the password

    printf("%s\n", password);

    return 0;
}

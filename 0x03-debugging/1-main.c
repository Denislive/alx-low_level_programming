#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function demonstrates an infinite loop.
 *              However, the problematic code causing the infinite loop has been commented out.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        /* Commenting out the problematic code causing the infinite loop
        while (i < 10)
        {
                putchar(i);
        }
        */

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}

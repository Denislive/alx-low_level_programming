#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
    int i, j, result;

    for (i = 0; i <= 9; i++)
    {
        _putchar('0'); /* Print the first digit */

        for (j = 1; j <= 9; j++)
        {
            _putchar(','); /* Print the comma separator */

            /* Calculate the multiplication result */
            result = i * j;

            /* Print the result with proper formatting */
            if (result <= 9)
                _putchar(' '); /* Add a leading space for single-digit numbers */
            else
                _putchar((result / 10) + '0'); /* Print the tens digit */

            _putchar((result % 10) + '0'); /* Print the ones digit */
        }

        _putchar('\n'); /* Move to the next line */
    }
}

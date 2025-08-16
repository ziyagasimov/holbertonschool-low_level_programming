#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a valid key for 101-crackme
 *
 * Return: 0
 */
int main(void)
{
    char key[7];
    int i;
    int sum = 0;

    /* seed random number generator */
    srand(time(NULL));

    for (i = 0; i < 6; i++)
    {
        key[i] = 33 + rand() % 94; /* printable ASCII 33–126 */
        sum += key[i];
    }

    /* adjust last character so total sum % 10 == 0 (example) */
    key[5] = key[5] - (sum % 10);

    key[6] = '\0';

    printf("%s\n", key);

    return 0;
}

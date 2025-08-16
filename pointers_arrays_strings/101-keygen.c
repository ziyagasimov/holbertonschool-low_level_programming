#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 *
 * Return: 0
 */
int main(void)
{
    char password[7]; 
    int i;
    
    srand(time(NULL));

    for (i = 0; i < 6; i++)
    {
        password[i] = 33 + (rand() % 94);
    }

    password[6] = '\0'; 

    printf("%s\n", password);

    return 0;
}

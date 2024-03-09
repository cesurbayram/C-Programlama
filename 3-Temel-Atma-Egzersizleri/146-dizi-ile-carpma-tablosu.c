#include <stdio.h>
#include <stdlib.h>
#define CESUR 10

int main()
{
    int i, j;

    printf("%4c", 'I');

    for (j = 0; j < 10; j++)
    {
        printf("%4d", j);
    }

    printf("\n");
    printf("----------\n");

    for (i = 1; i <= CESUR; i++)
    {
        printf("%4d", i);

        for (j = 1; j <= CESUR; j++)
        {
            printf("%4d", i * j);
        }

        printf("\n");
    }

    return 0;
}

#include<stdio.h>
#include<stdlib.h>

void sekilciz(int kenar, char karakter)
{
    int i, j;

    for (j = kenar; j > 0; j--)
    {
        for (i = 1; i <= kenar - j; i++)
        {
            printf(" ");
        }
        for (i = 1; i <= 2 * j - 1; i++)
        {
            printf("%d", i);  // Print the loop variable i instead of a constant number
        }

        printf("\n");
    }

    for (j = 1; j <= kenar; j++)
    {
        for (i = 1; i <= kenar - j; i++)
        {
            printf(" ");
        }
        for (i = 1; i <= 2 * j - 1; i++)
        {
            printf("%c", karakter);
        }
        printf("\n");
    }
}

int main()
{
    int kenar;
    char karakter;

    printf("Lutfen basilacak karakter giriniz\n");
    scanf(" %c", &karakter);  // Add a space before %c to consume the newline character
    printf("Kenar sayisi\n");
    scanf("%d", &kenar);

    printf("\n\n\n");
    sekilciz(kenar, karakter);
    return 0;
}

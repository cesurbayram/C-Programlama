#include<stdio.h>
#include<stdlib.h>

void sekilciz(int kenar, char karakter)
{
        int i,j;
        for (j = kenar; j > 0 ; j--)
        {
            for ( i = 1; i <= kenar-j; i++)
            {
                printf(" ");
            }
            for ( i = 1; i <= 2; i++)
            {
                printf("%d");
            }
            
            printf("\n");
        }  
}



int main()
{
    int kenar;
    char karakter;
    printf("Lutfen basilacak karekter giriniz\n");
    scanf("%c",&karakter);
    printf("Kenar sayisi\n");
    scanf("%d",&kenar);

    printf("\n\n\n");
    sekilciz(kenar,karakter);
    return 0;
}
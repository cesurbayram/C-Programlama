#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sirala(int A[], int adet)
{
    int i, j, gecici;
    for (i = 0; i < adet - 1; i++)
    {
        for (j = 0; j < adet - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                gecici = A[j];
                A[j] = A[j + 1];
                A[j + 1] = gecici;
            }
        }
    }
}

int main()
{
    int n, i;
    printf("Lutfen kac adet sayi girilecegini belirleyiniz: ");
    scanf("%d", &n);

    int dizi[100];

    
    srand(time(0));

    printf("Rastgele sayilar:\n");
    for (i = 0; i < n; i++)
    {
        dizi[i] = rand() % 100;
        printf("%4d", dizi[i]);
    }

    printf("\nDizinin sirali hali:\n");
    sirala(dizi, n);

    for (i = 0; i < n; i++)
    {
        printf("%4d", dizi[i]);
    }

    return 0;
}

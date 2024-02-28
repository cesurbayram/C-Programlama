#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int seritoplama(int N)
{
    int i;
    int toplam=0;
    for (i = 1; i <= N; i++)
    {
        toplam = toplam + (pow(i, 2));
    }
    return toplam;
}

int main()   
{   
    int n;
    printf("N degerini giriniz");
    scanf("%d", &n);
    printf("Serinin toplami = %d\n", seritoplama(n));
    return 0;
}

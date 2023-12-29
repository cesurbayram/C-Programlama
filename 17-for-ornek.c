#include <stdio.h>
#include <stdlib.h>

int main()
{
/*1 den girilen sayıya kadar olan sayıların toplamını verilmesi*/


    int sayim;
    int i,toplam=0;

    printf("lutfen bir sayi giriniz\n");
    scanf("%d",&sayim);

    for(i=1;i<=sayim;i++)
    {
            toplam +=i;
    }

    printf("Toplam:%d",toplam);

    return 0;
}
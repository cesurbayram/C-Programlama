#include<stdio.h>
#include<stdlib.h>
#define CESUR 10

int main()
{
    int i;
    int max,min;
    int dizi[CESUR];
    printf("lutfen %d kadar deger giriniz\n",CESUR);
    for ( i = 0; i < CESUR; i++)
    {
        scanf("%d",&dizi[i]);
    }
    for ( i = 0; i < CESUR; i++)
    {
        printf("%d",dizi[i]);
    }

    max=min=dizi[0];

    for ( i = 1; i < CESUR; i++)
    {
        if (dizi[i]>max)
        {
            max=dizi[i];
        }
        if (dizi[i]<min)
        {
            min=dizi[i];
        }
        
    }
    printf("MAXIMUM DEGER : %d\n",max);
    printf("MINUMUM DEGER : %d\n",min);
    return 0;
}
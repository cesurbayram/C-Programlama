#include<stdio.h>
#include<stdlib.h>
#define BIRIM 40
#define EMEK 200

int main()
{

    float metrekare, ucret;
        printf("lutfen salonun metrekaresini giriniz");
        scanf("%f",&metrekare);
        ucret=metrekare*BIRIM+EMEK;
        printf("Total ucretimiz : %.2f", ucret);
    return 0;
}
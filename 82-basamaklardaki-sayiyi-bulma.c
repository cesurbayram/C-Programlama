#include<stdio.h>
#include<stdlib.h>

int main()
{
    int sayi,birler_bas,onlar_bas;
        printf("bir sayi giriniz\n");
        scanf("%d",&sayi);
        birler_bas=sayi%10;
        onlar_bas=sayi%100/10;
        printf("birler basagami: %d",birler_bas);
        printf("onlar basagimiz: %d",onlar_bas);
    return 0;
}
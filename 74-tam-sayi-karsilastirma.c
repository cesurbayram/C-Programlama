#include<stdio.h>
#include<stdlib.h>

int main()
{

    int a,b;

    printf("lutfen 2 adet sayi giriniz");
    scanf("%d%d",&a,&b);

    if (a==b)
    {
        printf("2 sayi birbirine esittir\n");
    }
    if (a!=b)
    {
        printf("iki sayi birbirine esit degildir\n");
    }
    if (a<b)
    {
        printf("a degeri b den kucuktur");
    }
    if (a>b)
    {
        printf("a degeri b den buyuktur");
    }
    if (a%b==0)
    {
        printf(" a b'nin katidir");
    }
    else
    {
        printf("a ve tam sayi degildir ve kati degildir");
    }
    
    return 0;
}
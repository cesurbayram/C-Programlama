#include<stdio.h>
#include<stdlib.h>

int faktoriyel(int sayim)
{

    int i;
    int sonuc=1;

    for ( i = 1; i <= sayim; i++)
    {
        sonuc=sonuc*1;
    }
    return sonuc;
    
}

int main()
{
    int sayi;
    printf("lutfen bir sayi giriniz");
    scanf("%d",&sayi);
    printf("%d != %d",sayi,faktoriyel(sayi));
    return 0;
}
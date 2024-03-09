#include<stdio.h>
#include<stdlib.h>


int topla(int cesur, int bayram)
{
    return cesur+bayram;
}

int main()
{

int sayi1,sayi2;


    printf("lutfen 2 adet sayi giriniz");
    scanf("%d%d",&sayi1,&sayi2);
    printf("sayilarin toplami %d",topla(sayi1,sayi2));

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char cesur;
    printf("Lutfen bir karakter giriniz\n");
    scanf("%c",&cesur);
    if ((cesur>='A')&&(cesur<='Z'))
    {
        printf("Kucuk harfimiz %c\n",tolower(cesur));
    }
    else
    {
        printf("Yanlis bir karakter girdiniz");
    }
    return 0;
}
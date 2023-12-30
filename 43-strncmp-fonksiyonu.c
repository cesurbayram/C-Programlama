#include <stdio.h>
#include <stdlib.h>

int main()
{

     int sonuc;
        char cesur[15]="abcdef";
        char canan[15]="ABCDEF";

        sonuc=strncmp(cesur,canan,4);// verilen karektere kadar kıyaslama yapar

        if (sonuc<0)
        {
                printf("cesur canan dan daha kucuktur");
        }
        else if (sonuc>0)
        {
                printf("cesur canan dan daha buyuktur");
        }
        
        else
        {
                printf("ikiside birbirine esittir");
        }
}
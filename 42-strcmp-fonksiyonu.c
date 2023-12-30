#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

        int sonuc;
        char cesur[15]="abcdef";
        char canan[15]="ABCDEF";

        sonuc=strcmp(cesur,canan);

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

    return 0;
}
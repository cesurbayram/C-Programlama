#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        char can[]="Benim adim Cesur Bayram";
        char canan[100]="";//bosta olsa string bir karekter atilmali

        strncpy(canan,can,10);

        printf("%s",canan);

    return 0;
}
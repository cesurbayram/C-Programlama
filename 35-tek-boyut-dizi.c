#include <stdio.h>
#include <stdlib.h>

int main ()
{
        int bayram[5]={1,3,5,7,9};
        printf("%d\n",bayram[2]);     //0. elemandan başlar o şekilde bastırır


        int cesur[10];
        int i;

        for ( i = 0; i < 10; i++)
        {
            cesur[i]=2*i;
            printf("%d\n",cesur[i]);
        }
        
    return 0;
}
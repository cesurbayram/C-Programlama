#include <stdio.h>
#include <stdlib.h>

int main ()
{
        int i =0;

        while (i<5)
        {
            printf("%d\n",i);

            i++; //burada koşul belirtmeseydim while sonsuz döngüye girerdi
        }
        
    return 0;
}
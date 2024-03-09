#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for ( i = 0; i < 10; i++){

    printf("%d\n", i);
    if(i==4)
    {
        break;  //buradaki break dongusu 4 e kadar olan sayıların bastırımını istemiş gerisiniz sonlanmasını istemiş.
    }
    }
    return 0;
}
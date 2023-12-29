#include <stdio.h>
#include <stdlib.h>

int main()
{
    //sayin tek mi cift mi
    int sayi;

    printf("lutfen bir sayi giriniz");
    scanf("%d",&sayi);

    if(sayi%2 == 0)
    {
        printf("%d sayisi cifttir",sayi);
    }
    else
    {
        printf("%d sayisi tektir",sayi);
    }

    return 0;
}
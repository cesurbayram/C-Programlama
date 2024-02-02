#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,i;
    int sonuc;

    printf("lutfen bir sayi giriniz\n");
    scanf("%d",&a);

    sonuc=0;
    i=1;

    while (i<=a)
    {
        if (i==a)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d + ",i);
        }
        
        sonuc=sonuc+i;
        i++;
    }


    printf(" =%d",sonuc);
    
    return 0;
}
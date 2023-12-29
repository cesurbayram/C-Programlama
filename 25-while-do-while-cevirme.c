#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayim;

        printf("lutfen bir sayi giriniz\n");
        scanf("%d",&sayim);

        int i = 1;

        while (i<=10)
        {
            printf("%d\n",i*sayim);
            i++;
        }

        int k;
        printf("lutfen bir sayi giriniz\n");
        scanf("%d",&k);

        int a = 2;
        do
        {
            printf("%d\n",a*k);
            a++;
        } while (a<=10);
        
    
    return 0;
}
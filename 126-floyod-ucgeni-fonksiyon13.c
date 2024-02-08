#include<stdio.h>
#include<stdlib.h>

void floyd(int n)
{
    int i=1;
    int j;
    int a=1;
    while (i<=n)
    {
        j=1;
        while (j<=i)
        {
            printf("%3d",a);
            a++;
            j++;
        }
        

        printf("%d\n",i);
        i++;
    }
    
}

int main()
{
    int satir;
    printf("floyd ucgeni için satir sayisini giriniz");
    scanf("%d",&satir);
    floyd(satir);
    return 0;
}
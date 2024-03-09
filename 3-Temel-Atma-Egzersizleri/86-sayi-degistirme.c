#include<stdio.h>
#include<stdlib.h>

int main()
{
        int a,b,c;
        printf("A sayisini giriniz");
        scanf("%d",&a);
        printf("B sayisini giriniz");
        scanf("%d",&b);
        c=a;
        a=b;
        b=c;
        printf("A sayisi degeri:%d\n",a);
        printf("B sayisinin degeri:%d\n",b);
        
    return 0;
}
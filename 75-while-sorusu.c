#include<stdio.h>
#include<stdlib.h>

int main()
{

    int a;
    printf("lutfen bir deger giriniz");
    scanf("%d",&a);

    while (a!=0)
    {
        printf("%4d",a);
        a=a-1;
    }
    
    return 0;
}
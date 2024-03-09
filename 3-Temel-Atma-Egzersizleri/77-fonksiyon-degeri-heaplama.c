#include<stdio.h>
#include<stdlib.h>

int main()
{

        float x;
        printf("lutfen bir deger giriniz\n");
        scanf("%f",&x);

        printf(">>f(%.3f)=%.3f",x*x*x+13*x*x+47*x+5);
        
    return 0;
}
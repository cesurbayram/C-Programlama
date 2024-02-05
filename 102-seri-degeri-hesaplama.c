#include<stdio.h>
#include<stdlib.h>

int main()
{
        int i,n;
        float x,seri;

        printf("pozitif sayi giriniz:");
        scanf("%d",&n);
        printf("reels sayi : ");
        scanf("%f",&x);

        for ( i = 0; i <= 2*n-1; i+=2)
        {
            seri+=i/pow(x,i+1);
        }

        printf("Seri = %f",seri);
        

    return 0;
}
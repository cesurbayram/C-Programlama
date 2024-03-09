#include<stdio.h>
#include<stdlib.h>

int main()
{
        int i,n;
        float x,seri;
        char devam;

        do
        {
             printf("pozitif sayi giriniz:");
        scanf("%d",&n);
        printf("reels sayi : ");
        scanf("%f %c",&x, &devam);

        for ( i = 0; i <= 2*n-1; i+=2)
        {
            seri+=i/pow(x,i+1);
        }

        printf("Seri = %f",seri);

        } while ((devam=='E') || (devam=='e'));
        printf("Hoscakalin");
        
    return 0;
}
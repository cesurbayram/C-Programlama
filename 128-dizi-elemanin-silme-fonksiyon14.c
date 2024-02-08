#include<stdio.h>
#include<stdlib.h>

void kayitsil(int A[], int sira, int elemansayisi)
{
    int i;
    if (sira>=elemansayisi+1)
    {
        printf("Gecerli bir sira numarasini giriniz");
    }
    else
    {
        for ( i = sira-1; i < elemansayisi-1; i++)
        {
            A[i]=A[i+1];
        }
        printf("Kayit silindikten sonraki durum\n");
        for ( i = 0; i < elemansayisi-1; i++)
        {
            printf("%d",A[i]);
        }
        
        
    }
    
}


int main()
{
    int n;
    int i;
    int sirano;

    printf("kac adet sayi uretilecek\n");
    scanf("%d",&n);
    int dizi[n];

    srand(time(0));//her seferinde farkli degerler verir

    for ( i = 0; i < n; i++)
    {
        dizi[i]=rand()%100;
        printf("%d\n",dizi[i]);
    }
    printf("silinecek degerin sira numarisini giriniz\n");
    scanf("%d",&sirano);
    kayitsil(dizi,sirano,n);

    return 0;
}
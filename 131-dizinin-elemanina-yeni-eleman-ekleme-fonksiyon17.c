#include<stdio.h>
#include<stdlib.h>

void ekle(int A[],int sirano, int deger,int elemansayisi)
{
    int i;
    if (sirano<=elemansayisi+1)
    {
        for ( i = elemansayisi-1; i >=sirano-1; i--)
        {
            A[i+1]=A[i];
        }
        A[sirano-1]=deger;
        
        printf("Dizimizin eklenmis hali\n");
        for ( i = 0; i < elemansayisi; i++)
        {
            printf("%d",A[i]);
        }
        
    }
    else
    {
        printf("Gecerli bir sira numarasi giriniz\n");
    }
}


int main()
{
    int i,sirasi;
    int n,deger;
    printf("kac adet sayi uretilecek\n");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    for ( i = 0; i < n; i++)
    {
        dizi[i]=rand()%100;
    }
    printf("Hangi siraya eleman eklenilecek\n");
    scanf("%d",&sirasi);
    printf("eklenilecek sayi nedir\n");
    scanf("%d",&deger);
    ekle(dizi,sirasi,deger,n);
    
    return 0;
}
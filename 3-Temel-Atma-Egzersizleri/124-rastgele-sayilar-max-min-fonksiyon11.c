#include<stdio.h>
#include<stdlib.h>

void teksayilar(int n)
{
    int i=0;
    while (i<=n)
    {
        if (i%2==2)
        {
            printf("%d\n",i);
        }
        i++;   
    }  
}

int main()
{
    int sayi;
    printf("lutfen pozitif bir tamsayi giriniz");
    scanf("%d",&sayi);
    teksayilar(sayi);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n; // n değişkenini tanımla

    printf("Bir sayi giriniz\n");
    scanf("%d", &n);

    if ((n % 13 == 0) && (n % 17 == 0))
    {
        printf("Sayiniz hem 13'e hem de 17'ye bolunuyor\n");
    }
    else if (n % 13 == 0)
    {
        printf("Sayiniz 13'e bolunuyor\n");
    }
    else if (n % 17 == 0)
    {
        printf("Sayiniz 17'ye bolunuyor\n");
    }
    else
    {
        printf("Sayiniz 13 ve 17'ye bolunmuyor\n");
    }
    return 0;
}

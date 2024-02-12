#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double karekokbul(double n)
{
    double karekok;
    int i;
    if (n > 0.0)
    {
        karekok=n/2;
        for ( i = 0; i < 50; i++)
        {
            karekok=((karekok*karekok)+n)/(2*karekok);
        }
        return karekok;
    }
    else if (n == 0.0)
    {
        return 0.0;
    }
    else
    {
        printf("Lutfen gecerli bir deger giriniz\n");
        // You may want to return some default value or handle the error in a different way
        return -1.0;
    }
}

int main()
{
    double sayi;
    printf("Karekoku bulanacak sayi\n");
    scanf("%lf", &sayi);
    printf("%.5lf karekoku = %.5lf\n", sayi, karekokbul(sayi));
    return 0;
}

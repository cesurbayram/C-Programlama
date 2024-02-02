#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c;
    int min, max;

    printf("Lütfen 3 adet sayı giriniz\n");
    scanf("%d%d%d", &a, &b, &c);

    max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    printf("Max değer %d\n", max);

    min = a;
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    printf("Min değer %d", min);

    return 0;
}

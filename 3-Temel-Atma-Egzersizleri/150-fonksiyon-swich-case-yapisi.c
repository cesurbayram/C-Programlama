#include <stdio.h>
#include <stdlib.h>

float calculate(float bir, float iki, char operasyon)
{
    float islemsonucu;
    switch (operasyon)
    {
    case '+':
        islemsonucu = bir + iki;
        break;
    case '-':
        islemsonucu = bir - iki;
        break;
    case '/':
        islemsonucu = bir / iki;
        break;
    case '*':
        islemsonucu = bir * iki;
        break;
    default:
        break;
    }
    return islemsonucu;
}

int main()
{
    float birincisayi, ikincisayi;
    char islem;

    printf("Hangi islemi yapmak istiyorsunuz?\n");
    scanf(" %c", &islem); // Add a space before %c to skip whitespace characters

    printf("Lutfen iki adet sayi giriniz\n");
    scanf("%f%f", &birincisayi, &ikincisayi);

    float sonuc = calculate(birincisayi, ikincisayi, islem);

    printf("Ilk sayimiz %f, ikinci sayimiz %f, islemimiz %c ve sonucumuz %f\n", birincisayi, ikincisayi, islem, sonuc);

    return 0;
}

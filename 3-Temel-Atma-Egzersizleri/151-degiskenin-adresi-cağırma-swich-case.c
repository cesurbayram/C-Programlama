#include <stdio.h>
#include <stdlib.h>

void calculate(float bir, float iki, char operasyon, float *islemsonucu)
{
    switch (operasyon)
    {
    case '+':
        *islemsonucu = bir + iki;
        break;
    case '-':
        *islemsonucu = bir - iki;
        break;
    case '/':
        *islemsonucu = bir / iki;
        break;
    case '*':
        *islemsonucu = bir * iki;
        break;
    default:
        break;
    }
}

int main()
{
    float birincisayi, ikincisayi, sonuc; // Declare sonuc before using it
    char islem;

    printf("Hangi islemi yapmak istiyorsunuz?\n");
    scanf(" %c", &islem); // Add a space before %c to skip whitespace characters

    printf("Lutfen iki adet sayi giriniz\n");
    scanf("%f%f", &birincisayi, &ikincisayi);

    calculate(birincisayi, ikincisayi, islem, &sonuc);

    printf("Ilk sayimiz %f, ikinci sayimiz %f, islemimiz %c ve sonucumuz %f\n", birincisayi, ikincisayi, islem, sonuc);

    return 0;
}

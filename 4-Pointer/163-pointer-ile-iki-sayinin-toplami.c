#include <stdio.h>
#include <stdlib.h>

int main()
{
    // İki sayıyı toplama programı

    int sayi1, sayi2, toplam;
    int *ptr1, *ptr2;

    // Pointerlar, sayi1 ve sayi2'nin adreslerini tutuyor
    ptr1 = &sayi1;
    ptr2 = &sayi2;

    // Kullanıcıdan iki sayı girişi alınıyor
    printf("Lutfen 2 adet sayi giriniz\n");
    scanf("%d%d", ptr1, ptr2);

    // Sayıların toplamı hesaplanıyor
    toplam = *ptr1 + *ptr2;

    // Toplam değeri ekrana yazdırılıyor
    printf("Toplam : %d", toplam);

    return 0;
}

/*
ptr1 ve ptr2 pointerları, sayi1 ve sayi2 değişkenlerinin adreslerini tutar.
*ptr1 ve *ptr2 ifadeleri, pointerların gösterdiği adreslerdeki değerlere erişimi sağlar.
Program, kullanıcıdan alınan sayıları pointerlar aracılığıyla işleyerek toplamını hesaplar ve ekrana yazdırır.
*/
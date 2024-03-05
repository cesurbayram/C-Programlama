#include <stdio.h>
#include <stdlib.h>

int main() {
    // İlk örnek: Bir integer değişkenin adresini bir işaretçi(pointer) ile tutma
    /*int cesur = 10;
    int *p;
    p = &cesur;

    printf("Değer: %d\n", *p);      // Dereference işlemi ile değeri yazdırma
    printf("Adres: %p\n", p);      // İşaretçinin kendisi, yani adresi yazdırma
    printf("Değişken Değeri: %d\n", cesur);   // Değişkenin kendisini yazdırma
    printf("Değişken Adresi: %p\n", &cesur); // Değişkenin adresini yazdırma
    */

    // İkinci örnek: Bir işaretçi ile integer değişkenin adresini tutma ve üzerinde değişiklik yapma
    int *sayi;
    int n;
    n = 20;
    sayi = &n;

    printf("Değer: %d\n", *sayi);   // Dereference işlemi ile değeri yazdırma
    printf("Adres: %p\n", sayi);    // İşaretçinin kendisi, yani adresi yazdırma
    printf("Değişken Değeri: %d\n", n);        // Değişkenin kendisini yazdırma
    printf("Değişken Adresi: %p\n", &n);       // Değişkenin adresini yazdırma

    // İşaretçi ile değişkenin değerini değiştirme
    *sayi = 30;
    printf("Yeni Değer: %d\n", n);             // Değişiklik sonrası değişkenin yeni değerini yazdırma
    printf("Değişken Adresi: %p\n", &n);       // Değişkenin adresini yazdırma

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

// PI sabiti tanımlandı
#define PI 3.14
// VARMI ismi tanımlı

int main()
{
    // PI tanımlı olduğu için bu blok çalışacak
    #ifdef PI
    printf("C harika bir dil\n");
    #endif

    // Her durumda çalışacak olan bu satır
    printf(" C müthiş bir dil\n");

    // MACRO tanımlı değil, bu blok çalışmayacak
    #ifdef MACRO
    // successful code
    #else
    // else code
    #endif

    // VARMI tanımlı olduğu için bu blok çalışacak
    #ifdef VARMI
    int sayi = 2;
    #else
    // VARMI tanımlı değilse bu blok çalışacak
    printf("Lütfen bir değer giriniz\n");
    #endif

    // VARMI tanımlı olduğu durumda sayı değerini ekrana yazdırır
    #ifdef VARMI
    printf("Sayi degerim: %d\n", sayi);
    #endif

    return 0;
}

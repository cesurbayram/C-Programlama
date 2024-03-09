/*Bu kod, iki integer değişkenin (n ve p) adreslerini işaretçilere atayarak, ardından bir işlem sonucu ad1'in değerini değiştirip ekrana yazdırmaktadır. 
Yorum satırları, her bir adımı açıklamaktadır.*/

#include <stdlib.h>
#include <stdio.h>

int main() {
    int *ad1, *ad2, *ad;
    int n = 10, p = 20;

    ad1 = &n;
    ad2 = &p;

    // Atama öncesi ad1'in değerini yazdır
    printf("Atamadan önce ad1 degeri: %d\n", *ad1);

    // ad1'e ad2'nin değeri artı 2 kadar atama yap
    *ad1 = *ad2 + 2;

    // Atama sonrası ad1'in yeni değerini ve adresini yazdır
    printf("Atamami yaptiktan sonra ad1 degeri: %d\n", *ad1);
    printf("Adres: %p\n", (void *)ad1);

    return 0;
}

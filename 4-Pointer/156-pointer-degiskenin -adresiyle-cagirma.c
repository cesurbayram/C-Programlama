/*Bu kod, iki sayıyı değiştiren bir fonksiyonu kullanarak, önce değişken değerlerini yazdırıyor, 
sonra fonksiyonu çağırarak değerleri değiştirip son olarak fonksiyon çağrısından sonraki değerleri yazdırıyor. 
Yorum satırları, her bir adımı açıklamaktadır.*/

#include <stdio.h>
#include <stdlib.h>

// İki işaretçi aracılığıyla iki değeri değiştiren fonksiyon
void degistir(int *ad1, int *ad2) {
    int gecici;
    gecici = *ad1;
    *ad1 = *ad2;
    *ad2 = gecici;
}

int main() {
    int a = 10, b = 20;

    // Fonksiyonu çağırmadan önce değişken değerlerini yazdır
    printf("Çagridan önce: %d %d\n", a, b);

    // Fonksiyonu çağırarak değerleri değiştir
    degistir(&a, &b);

    // Fonksiyonu çağırdıktan sonra değişen değerleri yazdır
    printf("Çagrildiktan sonra: %d %d", a, b);

    return 0;
}

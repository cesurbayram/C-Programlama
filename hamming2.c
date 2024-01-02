#include <stdio.h>
#include <stdlib.h>

// Fonksiyon prototipi tanımlaması
int find_hamming_distance(int data1, int data2);

int main() {
    int data1 = 0, data2 = 0;
    
    while (1) {
        // Kullanıcıdan ilk sayıyı alma
        printf("Lutfen ilk sayiyi girin: ");
        scanf("%d", &data1);
        
        // Kullanıcıdan ikinci sayıyı alma
        printf("Lutfen ikinci sayiyi girin: ");
        scanf("%d", &data2);
        
        // Hamming mesafesini hesaplama ve ekrana yazdırma
        printf("Hamming Mesafesi: %d\n\n", find_hamming_distance(data1, data2));
    }
    
    return 0;
}

// Hamming mesafesini hesaplayan fonksiyon
int find_hamming_distance(int data1, int data2) {
    int value = 0, i = 0;

    // Her biti kontrol etme
    for (i = 0; i < 31; i++) {
        // İlgili bitleri kontrol etme ve farkı hesaplama
        if (((data1 >> i) & 1) != ((data2 >> i) & 1)) {
            value++;
        }
    }
    
    return value;
}

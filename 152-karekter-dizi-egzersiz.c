/*u kod, kullanıcıdan bir cümle veya kelime girişi almayı, dizinin boyutunu hesaplamayı, ardından iki kelimenin ortak harf sayısını bulmayı ve sonuçları ekrana yazdırmayı içermektedir. 
Yorum satırları, her bir fonksiyonun amacını ve yapılan işlemleri açıklamaktadır.*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 40

// Dizinin boyutunu hesaplayan fonksiyon
void boy(char tab[MAX], int *cesur) {
    int i;
    for (i = 0; tab[i] != '\0'; i++);
    *cesur = i;
}

// İki kelimenin ortak harflerini bulan fonksiyon
void ortak_harf(char tab[MAX], char bayram[MAX], int *t) {
    int i, j;
    int kelime1, kelime2;
    *t = 0;

    // Her kelimenin boyutunu hesapla
    boy(tab, &kelime1);
    boy(bayram, &kelime2);

    // İki kelime arasındaki ortak harf sayısını bul
    for (i = 0; i < kelime1; i++) {
        for (j = 0; j < kelime2; j++) {
            if (tab[i] == bayram[j]) {
                *t = *t + 1;
            }
        }
    }
}

int main() {
    char cumle[MAX], tab[MAX];
    int i = 0;
    int a;
    int r;

    // Kullanıcıdan bir cümle veya kelime al
    printf("Lütfen bir cümle ya da kelime giriniz:\n");
    do {
        scanf("%c", &cumle[i]);
        i++;
    } while (cumle[i - 1] != '\n');
    cumle[i - 1] = '\0';

    // Cümlenin boyutunu hesapla ve ekrana yazdır
    boy(cumle, &a);
    printf("Dizimizin boyu: %d\n", a);

    // Kullanıcıdan iki kelime al
    printf("Lütfen iki kelime giriniz:\n");
    scanf("%s %s", cumle, tab);

    // İki kelimenin ortak harf sayısını hesapla ve ekrana yazdır
    ortak_harf(cumle, tab, &r);
    printf("%s ve %s %d kadar ortak karaktere sahiptir\n", cumle, tab, r);

    return 0;
}
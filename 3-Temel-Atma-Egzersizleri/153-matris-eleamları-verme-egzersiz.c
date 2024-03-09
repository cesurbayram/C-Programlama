/*Bu kod, bir matrisi kullanıcıdan almak, 
ekrana yazdırmak ve matris üzerinde bazı hesaplamalar yapmak için
üç ayrı fonksiyon kullanmaktadır. main fonksiyonu, bu fonksiyonları 
sırasıyla çağırarak programın çalışmasını sağlamaktadır. 
Programın her bir adımını daha iyi anlamak için yorum satırlarını inceleyebilirsiniz.*/

#include <stdio.h>
#include <stdlib.h>
#define A 3
#define B 2

// Matrisi kullanıcıdan almak için fonksiyon
void init_tablo(int cesur[A][B]) {
    int i, j;
    printf("%d %d boyutunda bir matris giriniz\n", A, B);
    for (i = 0; i < A; i++) {
        for (j = 0; j < B; j++) {
            scanf("%d", &cesur[i][j]);
        }
    }
}

// Matrisi ekrana yazdırmak için fonksiyon
void print_tablo(int cesur[A][B]) {
    int i, j;
    printf("Tablomuz su sekilde gozukmektedir\n");
    for (i = 0; i < A; i++) {
        for (j = 0; j < B; j++) {
            printf("%4d", cesur[i][j]);
        }
        printf("\n"); // Her satırın sonunda yeni bir satıra geçme
    }
}

// Matris üzerinde çeşitli hesaplamalar yapmak için fonksiyon
void calcul(int cesur[A][B], int *max, int *min, int *toplam) {
    int i, j;
    *max = cesur[0][0];
    *min = cesur[0][0];
    *toplam = 0; // Toplam değerini sıfırla
    for (i = 0; i < A; i++) {
        for (j = 0; j < B; j++) {
            if (cesur[i][j] > *max) {
                *max = cesur[i][j];
            }
            if (cesur[i][j] < *min) {
                *min = cesur[i][j];
            }
            *toplam = *toplam + cesur[i][j];
        }
    }
}

int main() {
    int min, max, toplam;
    int cesur[A][B];
    init_tablo(cesur);
    printf_tablo(cesur);
    calcul(cesur, &max, &min, &toplam);
    printf("Maximum degerimiz : %d\n", max);
    printf("Minumum degerimiz : %d\n", min);
    printf("Toplam  degerimiz : %d\n", toplam);
    return 0;
}
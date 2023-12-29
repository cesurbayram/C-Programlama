#include <stdio.h>
#include <stdlib.h>

int main() {
    int cesur[2][3][2];
    int i, j, k;

    printf("Lutfen 12 adet sayi giriniz:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 2; k++) {
                scanf("%d", &cesur[i][j][k]);
            }
        }
    }

    printf("Girdiginiz degerler:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 2; k++) {
                printf("cesur[%d][%d][%d]=%d\n", i, j, k, cesur[i][j][k]);
            }
        }
    }

    return 0;
}

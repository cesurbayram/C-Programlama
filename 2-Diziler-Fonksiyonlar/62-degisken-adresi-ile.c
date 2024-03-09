#include <stdio.h>
#include <stdlib.h>

void ussunu_al(int a, int b, int *cesur) {
    int i;
    *cesur=1;
    for (i = 0; i < b; i++) {
         *cesur=*cesur* a;
    }
}

int main() {
    int x = 4, y = 5, sonuc;
    ussunu_al(x, y, &sonuc);
    printf("Sonuc: %d\n", sonuc);
    return 0;
}

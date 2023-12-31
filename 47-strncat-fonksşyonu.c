#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char cesur[100];
    char canan[1000];
    int a;

    printf("Lütfen bir yazi giriniz:\n");
    scanf("%s", cesur);

    printf("Lütfen ikinci yaziyi giriniz:\n");
    scanf("%s", canan);

    printf("Birinci yazinin sonuna kaç karakter eklemek istersiniz:\n");
    scanf("%d", &a);

    printf("Birleştirmeden önce: %s\n", cesur);
    strncat(cesur, canan, a);
    printf("Birleştirmeden sonra: %s\n", cesur);

    return 0;
}

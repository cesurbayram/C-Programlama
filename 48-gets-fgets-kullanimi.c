#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char name[30];
    char bayram[100];

    printf("Lütfen isminizi giriniz: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // Yeni satır karakterini kaldır

    printf("Bir şeyler yazin: ");
    fgets(bayram, sizeof(bayram), stdin);
    bayram[strcspn(bayram, "\n")] = '\0'; // Yeni satır karakterini kaldır

    printf("İsminiz: %s\n", name);
    printf("Girdiğiniz şey: %s\n", bayram);

    return 0;
}

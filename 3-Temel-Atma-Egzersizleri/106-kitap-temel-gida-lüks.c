#include<stdio.h>
#include<stdlib.h>

#define VERGİ_kitap 4.0
#define VERGİ_temelgida 5.6
#define VERGİ_luks 19.6
#define KİTAP 0
#define TEMELGİDA 1
#define LUKS 2

int main()
{
    int kod; 
    float fiyat;

    printf("Lutfen urunun fiyatini ve kodunu giriniz:\n");
    scanf("%f %d", &fiyat, &kod);

    printf("Urunun satis fiyati: ");

    switch (kod)
    {
    case KİTAP:
        printf("fiyatimiz %f", fiyat + fiyat * VERGİ_kitap / 100);
        break;
    case TEMELGİDA:
        printf("fiyatimiz %f", fiyat + fiyat * VERGİ_temelgida / 100);
        break;
    case LUKS:
        printf("fiyatimiz %f", fiyat + fiyat * VERGİ_luks / 100);
        break;
    default:
        break;
    }

    return 0;
}

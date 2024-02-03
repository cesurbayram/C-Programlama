#include<stdio.h>
#include<stdlib.h>

int main()
{
    char kod;
    float alan, ucret = 0;
    
    printf("Hali tipi T B S: ");
    scanf(" %c", &kod); // % sembolü düzeltilmiş
    
    printf("Lutfen alani giriniz: ");
    scanf("%f", &alan);
    
    if (kod == 'T')
    {
        ucret = alan * 18;
    }
    else if (kod == 'B')
    {
        ucret = alan * 17; // B ile çarpma düzeltilmiş
    }
    else if (kod == 'S')
    {
        ucret = alan * 19; // S ile çarpma düzeltilmiş
    }
    else
    {
        printf("Kod dogru degil\n");
        return 1; // Programı hata kodu ile sonlandır
    }
    
    printf("Odenmesi gereken ucret: %f\n", ucret); // Noktalı virgül eklenmiş
    return 0;
}

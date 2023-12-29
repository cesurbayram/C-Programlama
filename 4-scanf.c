#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int sayi; 
    float sayi2;
    double sayi3;
    char karakterim;

    printf("lutfen bir sayi giriniz");
    scanf("%d", &sayi);
    printf("aldiginiz sayi %d\n", sayi);

    printf("lutfen bir sayi giriniz");
    scanf("%f",&sayi2);
    printf("aldiginiz sayi %f\n", sayi2);

    printf("lutfen bir sayi giriniz");
    scanf("%lf", &sayi3);
    printf("aldiginiz sayi %lf\n", sayi3);

    printf("lutfen bir karekter giriniz\n");
    scanf("%c", &karakterim);
    printf("aldiginiz karekter %c", karakterim);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>


float dortislem(float sayi1,float sayi2,char islem)
{
    if (islem == '+') {
       return sayi1+sayi2;
    }
    else if (islem == '-') {
        return sayi1-sayi2;
    }
    else if (islem == '*') {
        return sayi1*sayi2;
    }
    else if (islem == '/') {
        return sayi1/sayi2;
    }
    else {
        printf("yanlis operator girdiniz");
    }
}

int main() {
    float sayi1, sayi2;
    char islem;

    printf("hangi islemi yaptirmak istiyorsunuz(+ - * /)");
    scanf(" %c", &islem); // Boşluk ekledim, tek bir karakter almak için.

    printf("lutfen iki adet sayi giriniz");
    scanf("%f%f", &sayi1, &sayi2);

    printf("islemin sonucu %.2f",dortislem(sayi1,sayi2,islem));

    return 0;
}

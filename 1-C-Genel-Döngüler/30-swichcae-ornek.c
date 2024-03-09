#include <stdio.h>
#include <stdlib.h>

int main()
{       
    float a, b;
    char op;

    printf("Lutfen bir karakter giriniz: ");
    scanf(" %c", &op); // & işareti ve %c kullanımı 

    printf("Lutfen iki adet sayi giriniz: ");
    scanf("%f %f", &a, &b); // & işareti eklenerek değişkenlere değer ataması 

    switch (op)
    {
        case '+': printf("%.2f + %.2f = %.2f", a, b, a + b); 
                  break;
        case '-': printf("%.2f - %.2f = %.2f", a, b, a - b); 
                  break;
        case '*': printf("%.2f * %.2f = %.2f", a, b, a * b); 
                  break;
        case '/': if (b != 0) {
                      printf("%.2f / %.2f = %.2f", a, b, a / b); 
                  } else {
                      printf("Sifira bölme hatasi!"); // Sıfıra bölme durumu
                  }
                  break;        
        default: printf("Hatali giris yaptiniz");
    }

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#define PI 3.14 
#define SAYI 5

int main()
{
        #if (SAYI == 5)
        printf("sayimiz : %d",SAYI);
        #else
        printf("sayimiz 5 den farklidir");
        #endif
        
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
#define SAYI 5
#define POWER 1

// POWER, 2'den küçükse bir uyarı mesajı ver
#if !defined POWER || POWER < 2
#warning POWER is not defined or is less than 2
//warning yerine error yazdığımızda kod çalışmaz
#endif

int main()
{
    return 0;
}

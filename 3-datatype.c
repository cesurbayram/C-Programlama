#include<stdio.h>
#include<stdlib.h>

int main()
{

/*
    int    (4 bytes) --> %d
    double (8 bytes) --> %lf
    float  (4 bytes) --> %f
    char   (1 byte)  --> %c tek bir karekter tutar
*/

int sayim, sayim2 ;
    sayim = 14;
    sayim2=16;
    printf("%d %d\n",sayim, sayim2 );

float sayi = 5.56;
double sayi2 = 6.66;
    printf("%.2f  %lf\n",sayi,sayi2);

char cesur='A';
     printf("%c",cesur);
     
    return 0;
}
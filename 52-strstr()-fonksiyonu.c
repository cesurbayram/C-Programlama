#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){


    char cesur[100]="C dilini ogreniyoruz";// control f gibi 
    char *sub;
    sub=strstr(cesur, 'dil');// buranın içine ne yazarsan onu arar
    printf("\n Arama sonrasi yeni string: %s",sub);


    return 0;
}
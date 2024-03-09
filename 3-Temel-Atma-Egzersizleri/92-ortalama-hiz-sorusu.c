#include<stdio.h>
#include<stdlib.h>
#define YOL 450

int main(){

        float ortalama_hiz,saat;
        printf("Ankara-Istanbul arasind kac saat gecirdin\n");
        scanf("%f",&saat);
        ortalama_hiz=YOL/saat;
        printf("Arabanin ortalama hizi : %f",ortalama_hiz);
    return 0;
}
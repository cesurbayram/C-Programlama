#include<stdio.h>
#include<stdlib.h>
#define circleArea(r) (PI*r*r)
#define PI 3.14


int main()
{
    float yaricap,alan;

        printf("lutfen yaricap degerini giriniz\n");
        scanf("%f",&yaricap);
        alan=circleArea(yaricap);
        printf("Alanimiz %.2f birim",alan);

    return 0;
}
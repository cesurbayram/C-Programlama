#include<stdio.h>
#include<stdlib.h>
#define PI 3.141


int main()
{
    float yaricap,alan;

        printf("lutfen yaricapi giriniz\n");
        scanf("%f",&yaricap);
        alan=PI*yaricap*yaricap;
        printf("Dairenin alani : %f",alan);
        
    return 0;
}
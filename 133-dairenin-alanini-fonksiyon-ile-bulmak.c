#include<stdio.h>
#include<stdlib.h>
#define PI 3.14

void hesapla(float yaricap)
{
    float alan,cevre;
    alan=PI*yaricap*yaricap;
    cevre=2*PI*yaricap;
    printf("Dairenin Alani=%.4f\n",alan);
    printf("Dairenin Cevresi=%.2f",cevre);

}

int main()
{
    float yaricap;
    printf("lutfen yaricap degerini giriniz\n");
    scanf("%f",&yaricap);
    hesapla(yaricap);
    return 0;
}
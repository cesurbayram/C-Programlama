#include<stdio.h>
#include<stdlib.h>


int main()
{
   /*klavyeden girilen bir fonksiyonun kaç karekter olduğunu bulma strln fonksiyonu kullanmiyacaz*/

    char cumle[100];
    int i=0;
    printf("lutfen bir cumle giriniz\n");
    gets(cumle);


    while (cumle[i])
    {
        i++;
    }
    

    printf("Cumledeki karekter sayisi : %d\n");

    return 0;
}